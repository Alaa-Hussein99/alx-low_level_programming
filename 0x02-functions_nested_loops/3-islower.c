#include "main.h"
/**
 * _islower - function that checks if the character is in lower case or not
 * @c: the character that will be checked
 * Return: 1 if lower case, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
