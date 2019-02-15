// Animal.cpp

#include"Animal.h"
#include<iostream>

Animal::Animal(){

    this->type_ = "cat";
    this->food_ = "fish";

}

Animal::Animal(string type, string food){

    this->type_ = type;
    this->food_ = food;

}


string Animal::getType() const{

    return this->type_;

}

string Animal::getFood() const {

    return this->food_;
}


void Animal::setType(string type){

    this->type_ = type;
}


void Animal::setFood(string food){

    this->food_ = food;

}


string Animal::print(){

    string result = "I am a " + this->type_;
    return result;
}
