#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passés en arguments
 * @argc: nombre d’arguments
 * @argv: tableau contenant les arguments
 *
 * Return: 0 si succès, 1 sinon
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
