#include "main.h"
/**
 * string_nconcat - concates strigs
 * @s1: 1st string
 * @s2: 2nd string
 * @n: no of bytes of s2 to concatenate
 * Return: pointer to memeory with concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	str = malloc(s1_l + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
