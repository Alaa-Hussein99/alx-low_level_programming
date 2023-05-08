#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: first input
 * @src: 2nd inpu
 * Return: returns the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n;

	while (src[i] != '\0')
		i++;
	for (n = 0; n < i; n++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest[i]);
}
