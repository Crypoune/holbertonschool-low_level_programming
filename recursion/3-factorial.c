#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre
 * @n: le nombre dont on veut la factorielle
 *
 * Return: la factorielle de n, ou -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
