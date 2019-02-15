/* Your code here! */
#include"hello.h"

std::string hello(){

    int age = 28;
    std::string studentName = "Hang Cui";
    std::string result = "Hello world! My name is " +
                        studentName + " and I am " + 
                        std::to_string(age) +  " years old.";

    return result;
}
