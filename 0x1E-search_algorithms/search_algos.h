#ifndef __SEARCH_ALGOS_H
#define __SEARCH_ALGOS_H
/* standard libraries used */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* functions pro-types */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);


#endif
