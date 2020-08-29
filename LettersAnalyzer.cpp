#include<vector>
#include<string>
#include<algorithm>
#include "CharacterCounter.cpp"

using namespace std;

class LettersAnalyzer {
private:
    vector<CharacterCounter> letters;

public:
    static bool isRusEngLetter(char ch) {
        if (isalpha(ch) || (ch >= 'À' && ch <= 'ÿ')) {
            return true;
        }
        return false;
    }

    void addFromString(string str) {
        for (int i = 0; i < str.length(); i++) {
            addLetter(str[i]);
        }
    }
    bool addLetter(char ch) {
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

    void sortByÂescendingCount() {
        sort(letters.begin(), letters.end(),
            [](CharacterCounter& a, CharacterCounter& b) { return a.getCount() > b.getCount(); }
        );
    }
    string toString() {
        string result;
        for (auto& item : letters) {
            result += item.toString() + "\n";
        }
        return result;
    }
};
