#include<string>

/**
 * Class represents a container for character
 * and its count.
 */
class CharacterCounter {
private:
    char charValue;
    int count;

public:
    /**
     * Constructs a new object instance for character
     * with its one copy.
     */
    CharacterCounter(char charValue) {
        this->charValue = charValue;
        this->count = 1;
    }

    /**
     * Returns character value.
     */
    char getCharValue() {
        return charValue;
    }
    /**
     * Returns character's count.
     */
    int getCount() {
        return count;
    }

    /**
     * Adds one copy of character
     * from the container.
     */
    void addCharInstance() {
        count++;
    }

    /**
     * Returns a string representation of the object.
     */
    std::string toString() {
        return std::string(1, charValue) + " - " + std::to_string(count);
    }
};
