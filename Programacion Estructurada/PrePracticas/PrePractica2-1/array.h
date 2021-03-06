#include <stdio.h>
#include <stdlib.h>

float* array_newArray(int arraySize);

void array_captureArray(float *array, int arraySize);
void array_extendArray(float *array, int newSize);
void array_getAverage(float *array, int arraySize, double *pAverage); 
void array_printArray(float *array, int arraySize);
void array_modifyArray(float *array, int *arraySize, double *average);
