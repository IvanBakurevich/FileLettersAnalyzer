#include "LettersAnalyzer.h"

bool LettersAnalyzer::isRusEngLetter(char ch) {
    if (isalpha(ch) || (ch >= 'À' && ch <= 'ÿ')) {
        return true;
    }
    return false;
}

vector<CharacterCounter> LettersAnalyzer::getLetters() {
    vector<CharacterCounter> vec(letters);
    return vec;
}

void LettersAnalyzer::addFromString(string str) {
    for (int i = 0; i < str.length(); i++) {
        addLetter(str[i]);
    }
}

bool LettersAnalyzer::addLetter(char ch) {
    if (!isRusEngLetter(ch)) {
        return false;
    }
    ch = tolower(ch);
    for (auto& item : letters) {
        if (item.getCharValue() == ch) {
            item.addCharInstance();
            return true;
        }
    }
    letters.push_back(CharacterCounter(ch));
    return true;
}

void LettersAnalyzer::sortByDescendingCount() {
    sort(letters.begin(), letters.end(),
        [](CharacterCounter& a, CharacterCounter& b) { return a.getCount() > b.getCount(); }
    );
}

string LettersAnalyzer::toString() {
    string result;
    for (auto& item : letters) {
        result += item.toString() + "\n";
    }
    return result;
}
