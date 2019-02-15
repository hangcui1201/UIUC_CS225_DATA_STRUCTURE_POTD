// Animal.h
#pragma once

#include<string>

using std::string;

class Animal{

    private:
        string type_;
    
    public:
        Animal();
        Animal(string type, string food);
        string food_;
        string getType() const;
        string getFood() const;
        void setType(string type);
        void setFood(string food);
        string print();

};
