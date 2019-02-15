// Pet.cpp

#include"Pet.h"
#include<string>

using std::string;


Pet::Pet(){

    this->setType("cat");
    this->setFood("fish");
    this->name_ = "Fluffy";
    this->owner_name_ = "Cinda";
}

Pet::Pet(string type, string food, string name, string owner_name){

    this->setType(type);
    this->setFood(food);
    this->name_ = name;
    this->owner_name_ = owner_name;


}

string Pet::getName() const{

    return this->name_;
}

string Pet::getFood() const{

    return this->food_;

}


string Pet::getOwnerName() const{

    return this->owner_name_;
}

void Pet::setName(string name){

    this->name_ = name;
}

void Pet::setFood(string food){

    this->food_ = food;
}


void Pet::setOwnerName(string owner_name){

    this->owner_name_ = owner_name;

}


string Pet::print(){

    string result = "My name is " + this->getName();
    return result;
}
