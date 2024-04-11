#pragma once
#include "T1.h"
#include <string>

class Factory {
public:
    static T1* createObject(std::string id, std::string type);
    static void deleteObject(T1* obj);
};