#pragma once
#include "T1.h"

class T2 : public T1 {
private:
    std::string type;

public:
    T2(std::string id, std::string t);

    void show() override;
    void Move() override; 
    bool Compare(T1& other) override;
    bool IsIntersect(T1& other) override;
    bool IsInclude(T1& other) override;
};