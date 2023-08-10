#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - This function checks if a string contains a non-digit char
 * @s: Indicates the string to be evaluated
 *
 * Return: 0 should appear if  a non-digit is found, 1 should appear otherwise
 */
int is_digit(char *s)
{
	int v = 0;

	while (s[v])
	{
		if (s[v] < '0' || s[v] > '9')
			return (0);
		v++;
	}
	return (1);
}

/**
 * _strlen - This function returns the length of a string
 * @s: Indicates the string to be evaluated
 *
 * Return: The string length
 */
int _strlen(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		v++;
	}
	return (v);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - This function multiplies two positive numbers
 * @argc: Indicates the number of arguments
 * @argv: Indicates the array of arguments
 *
 * Return: Always be 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, v, carry, digit1, digit2, *result, w = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (v = 0; v <= len1 + len2; v++)
		result[v] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (v = 0; v < len - 1; v++)
	{
		if (result[v])
			w = 1;
		if (w)
			_putchar(result[v] + '0');
	}
	if (!w)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
