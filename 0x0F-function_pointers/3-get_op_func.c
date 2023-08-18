#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Func selects correct func to perform op asked by user
 * @s: Operator passed as an argument
 *
 * Return: Pointer to funct corresponding to the op given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int v = 0;

	while (ops[v].op != NULL && *(ops[v].op) != *s)
		v++;

	return (ops[v].f);
}
