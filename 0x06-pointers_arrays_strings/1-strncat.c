#include "main.h"
/**
 * _strncat - concatenate to a string certain bytes
 * of another string, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @dest: first string to concatenated
 * @src: 2nd string
 * @n: number of bytes
 * Return: returns the dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;
	while (dest[l])
		l++;
	for (i = 0; i < n && src[i] != '\0')
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
