<<<<<<< HEAD
#include "main.h"


/**
 * create_array -> creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
=======
#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
>>>>>>> 44153dd093c3a7fd5945c3f67f513e48c8bce292
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
<<<<<<< HEAD
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
=======
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
>>>>>>> 44153dd093c3a7fd5945c3f67f513e48c8bce292
