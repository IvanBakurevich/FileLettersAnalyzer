#include<string>

class CharacterCounter {
private:
    char charValue;
    int count;

public:
    CharacterCounter(char charValue) {
        this->charValue = charValue;
        this->count = 1;
    }

    char getCharValue() {
        return charValue;
    }
    int getCount() {
        return count;
    }

    void addCharInstance() {
        count++;
    }
    std::string toString() {
        return std::string(1, charValue) + " - " + std::to_string(count);
    }
};
