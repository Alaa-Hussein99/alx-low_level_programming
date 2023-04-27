#include "main.h"
/**
 * _isalpha - checks if the character is feom alphabetics
 * @c: the taken input to check
 * Return: 1 if alpha, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
