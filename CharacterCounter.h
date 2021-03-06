#ifndef CHARACTER_COUNTER_H
#define CHARACTER_COUNTER_H
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
    CharacterCounter(char charValue);

    /**
     * Returns character value.
     */
    char getCharValue();

    /**
     * Returns character's count.
     */
    int getCount();

    /**
     * Adds one copy of character
     * from the container.
     */
    void addCharInstance();

    bool operator ==(const CharacterCounter& obj);

    bool operator !=(const CharacterCounter& obj);

    /**
     * Returns a string representation of the object.
     */
    std::string toString();
};

#endif
