#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - additionne tous les nombres positifs passés en arguments
 * @argc: nombre d’arguments
 * @argv: tableau contenant les arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
