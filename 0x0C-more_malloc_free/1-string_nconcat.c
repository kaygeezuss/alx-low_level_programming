#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Function concatenates n bytes of string to another string
 * @s1: The string to append to
 * @s2: The string to concatenate from
 * @n: The number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int w = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (w < len1)
	{
		s[w] = s1[w];
		w++;
	}

	while (n < len2 && w < (len1 + n))
		s[w++] = s2[j++];

	while (n >= len2 && w < (len1 + len2))
		s[w++] = s2[j++];

	s[w] = '\0';

	return (s);
}
