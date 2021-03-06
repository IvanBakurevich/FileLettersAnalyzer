#ifndef LETTERS_ANALYZER_H
#define LETTERS_ANALYZER_H
#include<vector>
#include<algorithm>
#include "CharacterCounter.h"

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
    static bool isRusEngLetter(char ch);

    /**
     * Returns vector containing letters and their count.
     */
    vector<CharacterCounter> getLetters();

    /**
     * Adds every letter from string to the container.
     */
    void addFromString(string str);

    /**
     * Adds character instance to the container,
     * if character is a letter from English or Russian alphabet
     * and return true, otherwise return false.
     * All letters converts to lowercase.
     */
    bool addLetter(char ch);

    /**
     * Sort letters from the container based on
     * their count in descending order.
     */
    void sortByDescendingCount();

    /**
    * Returns a string representation of the object.
    */
    string toString();
};

#endif
