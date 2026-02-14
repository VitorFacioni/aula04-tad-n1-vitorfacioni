#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdio.h>

/**
 * Element abstraction
 * 
 * By using typedef, we can easily change what type of data
 * the array stores. Just change this line and recompile!
 * This demonstrates the power of abstraction.
 */
typedef int Element;

/**
 * Prints a single element.
 * @param e The element to print
 */
void print_element(Element);

#endif
