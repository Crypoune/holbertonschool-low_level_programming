#include "3-calc.h"

/**
 * main - Entry point. Performs simple arithmetic operations.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description: This program takes three arguments:
 * two integers and an operator.
 * It performs the operation and prints the result.
 * Usage: ./calc num1 operator num2
 * Operators: +, -, *, /, %
 *
 * Return: 0 on success, 98 if wrong number of arguments,
 * 99 if operator is invalid, 100 if division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
