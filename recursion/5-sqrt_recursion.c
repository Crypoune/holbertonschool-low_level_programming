#include "main.h"

/**
 * _sqrt_helper - teste récursivement les candidats
 * @n: nombre dont on cherche la racine
 * @i: candidat actuel
 *
 * Return: racine de n ou -1 si n n’a pas de racine naturelle
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle de n
 * @n: nombre dont on cherche la racine
 *
 * Return: racine carrée ou -1 si n < 0 ou pas de racine
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}
