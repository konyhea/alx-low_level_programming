#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function to perform operatio
 * @s: the operator passed to the program
 *
 * Return: a poinetr to the function
 */


int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int x;

	x = 0;


	while (op_s[x].op != NULL && *(op_s[x].op) != *s)
		x++;

	return (op_s[x].f);
}
