#include<vector>
#include<string>
#include<algorithm>
#include "CharacterCounter.cpp"

using namespace std;

/**
 * Class represents a container that 
 * contains set of letters with
 * each letter's count. 
 */
class LettersAnalyzer {
private:
    vector<CharacterCounter> letters;

public:
    /**
     *Shows whether character is letter from English or Russian alphabet.
     */
    static bool isRusEngLetter(char ch) {
        if (isalpha(ch) || (ch >= 'À' && ch <= 'ÿ')) {
            return true;
        }
        return false;
    }

    /**
     * Adds every letter from string to the container.
     */
    void addFromString(string str) {
        for (int i = 0; i < str.length(); i++) {
            addLetter(str[i]);
        }
    }

    /**
     * Adds character instance to the container,
     * if character is a letter from English or Russian alphabet
     * and return true, otherwise return false.
     * All letters converts to lowercase.
     */
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

    /**
     * Sort letters from the container based on
     * their count in descending order.
     */
    void sortByÂescendingCount() {
        sort(letters.begin(), letters.end(),
            [](CharacterCounter& a, CharacterCounter& b) { return a.getCount() > b.getCount(); }
        );
    }

    /**
    * Returns a string representation of the object.
    */
    string toString() {
        string result;
        for (auto& item : letters) {
            result += item.toString() + "\n";
        }
        return result;
    }
};
