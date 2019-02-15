// your code here
#include "q5.h"
#include "Food.h"

void increase_quantity(Food *food){
    food->set_quantity(food->get_quantity() + 1);
}
