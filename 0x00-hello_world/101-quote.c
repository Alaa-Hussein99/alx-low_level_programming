#include <unistd.h>
/**
* main - Entry point, writes to stderr
 * Description: using the function write from the unistd library
 * Return: returns 1 (Fail)
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
