#include "main.h"
/**
 * _isupper - function to check if the character is upper case or not
 * @c: input character
 * Return: 1 if upper, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
