#include "main.h"
/**
 * _strcat - function to concatente two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: returns the dest string after concatenation
*/
char *_strcat(char *dest, char *src)
{
	int l, l2;

	l = 0;
	while (dest[l])
		l++;
	for (l2 = 0; src[l2]; l2++)
		dest[l++] = src[c2];
	return (dest);
}
