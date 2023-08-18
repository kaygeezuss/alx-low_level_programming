#include "3-calc.h"

int op_div(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function returns the sum of 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Functin returns the difference of 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function returns the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Result of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function returns division of 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function returns remainder of division of 2 numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
