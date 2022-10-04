#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memeory which contains a copy of the
 * string given as parameter
 * @str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = o; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	
	if (cpy == NULL)
		return (NULL);

	for (index = 0; str [index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\o';

	return (cpy);
}
