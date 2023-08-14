#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Function returns length of a string
 * @s: The string to evaluate
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int v;

	v = 0;

	while (s[v] != '\0')
	{
		v++;
	}

	return (v);
}

/**
 * *_strcpy - Function copies string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The pointer to the buffer in which we copy the string
 * @src: String to copy
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, v;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (v = 0; v < len; v++)
	{
		dest[v] = src[v];
	}
	dest[v] = '\0';

	return (dest);
}

/**
 * new_dog - Function creates new dog
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dogs owner
 *
 * Return: Pointer to new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
