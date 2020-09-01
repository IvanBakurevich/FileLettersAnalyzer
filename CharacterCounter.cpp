#include "CharacterCounter.h"

CharacterCounter::CharacterCounter(char charValue) {
    this->charValue = charValue;
    this->count = 1;
}

char CharacterCounter::getCharValue() {
    return charValue;
}

int CharacterCounter::getCount() {
    return count;
}

void CharacterCounter::addCharInstance() {
    count++;
}

bool CharacterCounter::operator ==(const CharacterCounter& obj) {
    return (charValue == obj.charValue && count == obj.count);
}

bool CharacterCounter::operator !=(const CharacterCounter& obj) {
    return !(charValue == obj.charValue && count == obj.count);
}

std::string CharacterCounter::toString() {
    return std::string(1, charValue) + " - " + std::to_string(count);
}
