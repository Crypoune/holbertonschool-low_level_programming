#include "main.h"

/**
 * _is_prime_helper - vérifie récursivement si n est divisible par i
 * @n: nombre à tester
 * @i: diviseur courant
 *
 * Return: 1 si premier, 0 sinon
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - retourne 1 si n est premier, 0 sinon
 * @n: nombre à tester
 *
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
