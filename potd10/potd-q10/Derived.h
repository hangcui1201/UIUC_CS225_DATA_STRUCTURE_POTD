#pragma once

#include"Base.h"
#include<string>
using std::string;

class Derived : public Base{

    public:
        virtual ~Derived();
        string foo();
        string bar();


};