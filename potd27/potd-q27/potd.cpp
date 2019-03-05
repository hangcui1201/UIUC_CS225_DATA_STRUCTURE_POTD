// Your code here
#include "potd.h"

string getFortune(const string &s){

    int str_size = s.size();

    if (str_size == 2) {
        return "Welcome";
    }

    if (str_size == 3) {
        return "Welcome to CS225";
    }
    
    if (str_size == 4) {
        return "Weloome to CS225 POTD";
    }

    if (str_size == 5) {
        return "Welcome to CS225 POTD Practice";
    }

    if (str_size > 6) {
        return "You have a wonderful day!";
    }

    return "Goog Luck!";

}
