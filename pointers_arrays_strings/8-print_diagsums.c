#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - affiche la somme des diagonales d'une matrice carrée
 * @a: pointeur vers le premier élément de la matrice
 * @size: taille de la matrice (n x n)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 -i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
