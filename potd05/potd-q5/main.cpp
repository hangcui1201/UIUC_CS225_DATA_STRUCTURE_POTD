// your code here
#include "q5.h"
#include "Food.h"

int main(){

    Food* food = new Food;
    Food* apple = new Food("apple");

    std::cout << food->get_quantity() << std::endl;
    std::cout << apple->get_quantity() << std::endl;

    increase_quantity(apple);

    return 0;

}

