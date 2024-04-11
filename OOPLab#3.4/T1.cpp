#include "T1.h"
#include <iostream>

T1::T1(std::string id) : identifier(id) {}

T1::T1() : identifier("") {}

std::string T1::getIdentifier() {
    return identifier;
}

void T1::show() {
    std::cout << "Object ID: " << identifier << std::endl;
}

bool T1::Compare(T1& other) {
    std::cout << "Comparing objects:" << std::endl;
    return true;
}

bool T1::IsIntersect(T1& other) {
    std::cout << "Checking intersection of objects:" << std::endl;
    return true;
}

bool T1::IsInclude(T1& other) {
    std::cout << "Checking inclusion of objects:" << std::endl;
    return true;
}