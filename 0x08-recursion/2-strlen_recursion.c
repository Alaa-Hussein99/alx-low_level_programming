#include "main.h"
/**
 * _strlen_recursion - prints len recursively
 * @s: the input string
 * Return: the length
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = n + _strlen_recursion(s + 1) + 1;
	return (n);
}
