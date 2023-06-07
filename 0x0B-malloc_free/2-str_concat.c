#include "main.h"
/**
 * _strlen - gets the len of string
 * @s: the string
 * Return: length
*/
int _strlen(char *s)
{
	int l = 0;

	for (; s[l] != '\0'; l++)
	;
	return (l);
}

/**
 * *str_concat - concatenates 2 strings
 * @s1: 1st str
 * @s2: 2nd str
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
	}
}
