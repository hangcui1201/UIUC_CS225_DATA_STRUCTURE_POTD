// your code here!
#include "potd.h"
#include <cmath>
#include <iostream>

int *potd::raise(int *arr){

    int size = 0;
    for(size=0; arr[size] != -1; size++){
        std::cout << arr[size] << std::endl;
    }
    size = size + 1;

    int* raise_pow = new int[size];

    raise_pow[0] = arr[0];

    for(int i=0; i<size-2; i++){
        raise_pow[i] = pow(arr[i],arr[i+1]);
    }

    raise_pow[size-1] = arr[size-1];
    raise_pow[size-2] = arr[size-2];

    return raise_pow;
}
