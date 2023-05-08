#include "main.h"
/**
 * rev_string - function theat reverse a string
 * @s: the input string
*/
void rev_string(char *s)
{
	int l = 0;
	int i;
	char temp;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
