#pragma once
#include <string>

class T1 {
protected:
    std::string identifier;

public:
    T1(std::string id);
    T1();
    std::string getIdentifier(); 
    virtual void show();
    virtual void Move() = 0; 
    virtual bool Compare(T1& other);
    virtual bool IsIntersect(T1& other);
    virtual bool IsInclude(T1& other);
    virtual ~T1() {}
};