#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start of the range
 * @max: end of the range
 *
 * Return: pointer to newly created array
 * If min > max, returns NULL
 * If malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	unsigned int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		a[i] = min + i;

	return (a);
}
