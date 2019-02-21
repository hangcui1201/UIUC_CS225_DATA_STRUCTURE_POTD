#include "potd.h"

// Your code here!

/** Returns the sum of elements between start to end. 
	The value at start is included, while the value at end is not.
*/
double sum(vector<double>::iterator start, vector<double>::iterator end){

    double result = 0.0;

    for(std::vector<double>::iterator it = start; it != end; ++it){
        result += *it;
    }

    return result;

}

/** Returns an iterator that points to the element with the largest value between start and end. */
vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end){

    vector<double>::iterator max_it = start;
    double max_value = 0.0;

    for(std::vector<double>::iterator it = start; it != end; ++it){
        if(*it > max_value){
            max_value = *it;
            max_it = it;
        }
    }

    return max_it;

}

/** Sort, in descending order, part of an array between start to end. 
	Hint: use max_iter.
*/
void sort_vector(vector<double>::iterator start, vector<double>::iterator end){

    std::vector<double>::iterator it = start;
    vector<double>::iterator max_it;
    double cur_max = 0.0;

    while(it != end){

        max_it = max_iter(it, end);

        cur_max = *max_it;
        *max_it = *it;
        *it = cur_max;

        ++it;
    }


}