#include <iostream>
#include <string>

#include "Square.h"

Square::Square() {
    name = "mysquare";
    lengthptr = new double;
    *lengthptr = 2.0;
}

void Square::setName(std::string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

std::string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
}

Square::~Square() {
  delete lengthptr;
}

Square & Square::operator=(const Square & other){

  if(this == &other){
    return *this;
  }

  delete lengthptr;
  name = other.getName();
  lengthptr = new double;
  *lengthptr = other.getLength();

  return *this;

}

Square Square::operator+(const Square & other){

    std::string new_name = this->getName() + other.getName();
    double new_length = this->getLength() + other.getLength();

    Square new_square;
    new_square.setLength(new_length);
    new_square.setName(new_name);

    return new_square;

}
