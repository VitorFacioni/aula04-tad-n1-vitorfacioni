#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "element.h"

/**
 * IMPLEMENTATION of the Array ADT
 * 
 * This is the PRIVATE part - users cannot see or access this directly.
 * The struct definition is here (not in the .h file) to enforce encapsulation.
 * Users must use the functions we provide; they cannot directly manipulate
 * the internal fields.
 */

struct Array {
  Element *array;  // Pointer to dynamically allocated array
  int size;        // Number of elements in the array
};

Array* array_create(int size) {
  // Allocate memory for the Array structure itself
  Array* array = malloc(sizeof(Array));
  
  // Allocate memory for the actual elements
  array->array = malloc(sizeof(Element) * size);
  
  // Store the size
  array->size = size;
  
  return array;
}

void array_destroy(Array* array) {
  // Free the dynamically allocated array first
  free(array->array);
  
  // Then free the Array structure itself
  free(array);
}

void array_print(Array* array) {
  // Iterate through all elements
  for (int i = 0; i < array->size; i++) {
    // Use the element abstraction to print
    print_element(array->array[i]);
  }
  printf("\n");
}

void array_set(Array* array, int index, Element value) {
  // Store the value at the specified position
  array->array[index] = value;
}

Element array_get(Array* array, int index) {
  // Return the value at the specified position
  return array->array[index];
}

int array_size(Array* array) {
  // Return the stored size
  return array->size;
}
