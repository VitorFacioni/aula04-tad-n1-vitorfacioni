#include "array.h"

#include <stdio.h>

// this code is not supposed to compile, as the Array struct is an opaque type

int main(void) {
    Array* array = array_create(10);

    // array->size = 20; // this will generate a compilation error
    for (int i = 0; i < array_size(array); i++) {
        array_set(array, i, i);
    }
    array_print(array);
    array_destroy(array);
    return 0;
}
