#include "main.h"

/**
 * *_strdup - return new allocated space
 * contains a copy of the string
 * @str: string
 * Return: 0
*/
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];
	return (m);
}
