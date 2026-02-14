#include "array_dinamico.h"
#define INITIAL_CAPACITY 10
#include <stdio.h>

struct ArrayDinamico
{
    int* array;
    size_t size;
    size_t capacity;
};

void array_dinamico_resize(ArrayDinamico* array, size_t new_capacity);
void array_dinamico_resize(ArrayDinamico* array, size_t new_capacity)
{
    int* new_array = realloc(array->array, new_capacity * sizeof(int));
    if (new_array != NULL)
    {
        array->array = new_array;
        array->capacity = new_capacity;
    }
}   

ArrayDinamico* array_dinamico_create(void){
    ArrayDinamico* array = malloc(sizeof(ArrayDinamico));
    array->array = calloc(INITIAL_CAPACITY, sizeof(int));
    array->size = 0;
    array->capacity = INITIAL_CAPACITY;

    return array;
}
void array_dinamico_destroy(ArrayDinamico* array){
    free(array->array);
    free(array);
}
void array_dinamico_print(ArrayDinamico* array){
    for (size_t i = 0; i < array->size; i++)
    {
        printf("%d ", array->array[i]);
    }
    printf("\n");
}
int array_dinamico_get(ArrayDinamico* array, size_t index){
  return array->array[index];

}
void array_dinamico_set(ArrayDinamico* array, size_t index, int value){

    array->array[index] = value;

}
size_t array_dinamico_size(ArrayDinamico* array){
    return array->size;
}
size_t array_dinamico_capacity(ArrayDinamico* array){
    return array->capacity;
}

void array_dinamico_add(ArrayDinamico* array, int value){
    if (array->size == array->capacity)
    {
        array_dinamico_resize(array, array->capacity * 2);
    }
    array->array[array->size] = value;
    array->size++;
}
