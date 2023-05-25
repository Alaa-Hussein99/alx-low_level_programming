#include "3-calc.h"
/**
 * main - checks the code
 * @argc: no of arguments
 * @argv: argument vector
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int (*op_f)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_f = get_op_func(argv[2]);
	if (!op_f)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_f(a, b));
	return (0);
}
