#include "Factory.h"
#include "T2.h"

T1* Factory::createObject(std::string id, std::string type) {
    return new T2(id, type);
}

void Factory::deleteObject(T1* obj) {
    delete obj;
}