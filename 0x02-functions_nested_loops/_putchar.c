#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @c: the character that will be printed
 * Return: 1(Success) and -1(Error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
