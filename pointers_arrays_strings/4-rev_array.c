#include "main.h"

/**
 * reverse_array - inverse le contenu d'un tableau d'entiers
 * @a: pointeur vers le tableau
 * @n: nombre d'éléments dans le tableau
 *
 * Return: rien
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
