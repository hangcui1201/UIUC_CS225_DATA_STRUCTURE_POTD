// Your code here
#pragma once
#include<string>
#include<iostream>

class Food{

    private:
        std::string name_;
        int quantity_;

    public:
        Food();
        Food(std::string name);
        std::string get_name();
        int get_quantity();
        void set_name(std::string name);
        void set_quantity(int quantity);
};
