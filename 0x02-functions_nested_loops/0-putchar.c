#include <main.h>
/**
 * main - Entry point
 * Description: prints the string _putchar using _putchar function
 * Return: 0 (Success)
*/
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
