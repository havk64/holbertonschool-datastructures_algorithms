#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <sys/types.h>
#include <math.h>
#include <stdio.h>
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
void print(int a, int b);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
