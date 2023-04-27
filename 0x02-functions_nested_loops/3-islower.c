#include "main.h"
/**
 * _islower - function that checks if the character is in lower case or not
 * @c: the character that will be checked
 * Return: 1 if lower case, 0 otherwise
*/
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
