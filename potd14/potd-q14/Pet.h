// Pet.h

#pragma once

#include"Animal.h"
#include<string>

using std::string;

class Pet : public Animal{

    private:
        string name_;
        string owner_name_;

    public:

        Pet();
        Pet(string type, string food, string name, string owner_name);

        string getName() const;
        string getFood() const;
        string getOwnerName() const;

        void setName(string name);
        void setFood(string food);
        void setOwnerName(string owner_name);

        string print();


};
