#ifndef ARRAY_H
#define ARRAY_H

#include "element.h"

/**
 * Array ADT (Abstract Data Type)
 * 
 * This is the PUBLIC INTERFACE of the Array ADT.
 * Users of this ADT only see WHAT operations are available,
 * not HOW they are implemented.
 * 
 * The actual structure (HOW the array stores data) is hidden
 * in the .c file - this is called ENCAPSULATION.
 */

// Opaque type: users know Array exists, but not its internal structure
typedef struct Array Array;

/**
 * Creates a new array with the specified size.
 * @param size Number of elements the array will hold
 * @return Pointer to the newly created array, or NULL if allocation fails
 */
Array* array_create(int size);

/**
 * Destroys an array and frees its memory.
 * @param array The array to destroy
 */
void array_destroy(Array* array);

/**
 * Prints all elements in the array.
 * @param array The array to print
 */
void array_print(Array* array);

/**
 * Gets the value at a specific index.
 * @param array The array to access
 * @param index Position to read from (0-based)
 * @return The element at the given index
 */
Element array_get(Array* array, int index);

/**
 * Sets the value at a specific index.
 * @param array The array to modify
 * @param index Position to write to (0-based)
 * @param value The element to store
 */
void array_set(Array* array, int index, Element value);

/**
 * Returns the size of the array.
 * @param array The array to query
 * @return Number of elements in the array
 */
int array_size(Array* array);

#endif
