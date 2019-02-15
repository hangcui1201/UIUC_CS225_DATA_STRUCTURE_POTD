// Your code here!
#include"Thing.h"
#include<iostream>

using namespace potd;
using std::string;
using std::cout;
using std::endl;


Thing::Thing(int size){

    this->properties_ = new string[size];
    this->values_ = new string[size];
    this->props_ct_ = 0;
    this->props_max_ = size;
}


Thing::Thing(const Thing & other){
    // _copy(other);
    this->props_ct_ = other.props_ct_;
    this->props_max_ = other.props_max_;

    this->properties_ = new string[other.props_max_];
    this->values_ = new string[other.props_max_];

    for (int i=0; i<this->props_ct_; i++){
        this->properties_[i] = other.properties_[i];
        this->values_[i] = other.values_[i];
    }
}


Thing & ::Thing::operator=(const Thing & other){

    if(this == &other){
        return *this;
    }

    _destroy();
    // std::cout << "Hello2" << std::endl;
    // _copy(other);
    this->props_ct_ = other.props_ct_;
    this->props_max_ = other.props_max_;

    this->properties_ = new string[other.props_max_];
    this->values_ = new string[other.props_max_];

    for (int i=0; i<this->props_ct_; i++){
        this->properties_[i] = other.properties_[i];
        this->values_[i] = other.values_[i];
    }

    return *this;
}


Thing::~Thing(){
    _destroy();
}

/*
* Takes a property name and value, and inserts them into the arrays. 
* Returns the index into the array if successul, and -1 if the array was full. 
* If the property name already exists, replace the value.
*/
int Thing::set_property(string name, string value){

    // 0 - props_max_ - 1

    bool exited = false;
    int index = 0;

    if(this->props_ct_==this->props_max_){
        // One problem could be that you return -1 for size reason before 
        // you actually check if the property name exists or not 
        for(int i=0; i<this->props_ct_; i++){
            if(this->properties_[i] == name){
                this->values_[i] = value;
                exited = true;
                index = i;
                break;
            }
        }

        if(exited==true){
            return index;
        }else{
            return -1;
        }
        
    }else{

        // Check if the property already exists or not
        for(int i=0; i<this->props_ct_; i++){
            if(this->properties_[i] == name){
                this->values_[i] = value;
                exited = true;
                index = i;
                break;
            }
        }

        if(exited == true){
            return index;
        }else{
            if(this->props_ct_<=this->props_max_-1){
                this->properties_[this->props_ct_] = name;
                this->values_[this->props_ct_] = value;
                index = this->props_ct_;
                this->props_ct_ += 1;
            }
            return index;
        }
    }

}
    
string Thing::get_property(string name){

    string empty = "";

    for (int i=0; i<this->props_ct_; i++){
        if(this->properties_[i] == name){
            return this->values_[i];
        }
    }

    return empty;

}

void Thing::_destroy(){

    delete [] properties_;
    delete [] values_;
}

// void Thing::_copy(const Thing & other){

//     this->props_ct_ = other.props_ct_;
//     this->props_max_ = other.props_max_;

//     this->properties_ = new string[other.props_max_];
//     this->values_ = new string[other.props_max_];

//     for (int i=0; i<this->props_ct_; i++){
//         this->properties_[i] = other.properties_[i];
//         this->values_[i] = other.values_[i];
//     }

// }