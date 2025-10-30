#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche n éléments d’un tableau d'entiers
 * @a: pointeur vers le tableau d'entiers
 * @n: nombre d’éléments à afficher
 *
 * Return: rien
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
