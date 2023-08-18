#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function prints its own operation codes
 * @argc: Indicates the number of arguments
 * @argv: Indicates the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, v;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (v = 0; v < bytes; v++)
	{
		if (v == bytes - 1)
		{
			printf("%02hhx\n", arr[v]);
			break;
		}
		printf("%02hhx ", arr[v]);
	}
	return (0);
}
