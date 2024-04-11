#include "T2.h"
#include <iostream>

T2::T2(std::string id, std::string t) : T1(id), type(t) {}

void T2::show() {
    std::cout << "Object ID: " << getIdentifier() << ", Type: " << type << std::endl;
}

void T2::Move() {
    std::cout << "Object " << identifier << " is moved." << std::endl;
}

bool T2::Compare(T1& other) {
    std::cout << "Comparing objects:" << std::endl;
    return true;
}

bool T2::IsIntersect(T1& other) {
    std::cout << "Checking intersection of objects:" << std::endl;
    return true;
}

bool T2::IsInclude(T1& other) {
    std::cout << "Checking inclusion of objects:" << std::endl;
    return true;
}