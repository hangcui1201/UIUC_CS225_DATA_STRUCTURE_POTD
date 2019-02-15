// Your code here
#include"Food.h"

Food::Food(){
    set_quantity(1);
    set_name("Unknown");
}

Food::Food(std::string name){
    set_quantity(1);
    set_name(name);
}

std::string Food::get_name(){

    return name_;
}

void Food::set_name(std::string name){
    name_ = name;
}

int Food::get_quantity(){
    return quantity_;
}

void Food::set_quantity(int quantity){
    quantity_ = quantity;
}