#include <stdio.h>
#include "array.h"

/**
 * Example usage of the Array ADT
 * 
 * Notice how we use the array without knowing its internal structure.
 * We only use the public interface functions (array_create, array_set, etc.)
 * This is the benefit of ADTs: clear separation between interface and implementation.
 */
int main(void) {
  // Create an array with 10 elements
  Array* array = array_create(10);
  
  // Fill the array with values 0 through 9
  for (int i = 0; i < array_size(array); i++) {
    array_set(array, i, i);
  }
  
  // Print all elements
  array_print(array);
  
  // Clean up memory
  array_destroy(array);
  
  return 0;
}
