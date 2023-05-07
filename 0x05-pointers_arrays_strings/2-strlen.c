#include "main.h"
/**
 * _strlen - takes a string and counts its characters
 * @s: the i/p string
 * Return: return the number of characters in the string
*/
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
