#include "main.h"

/**
 * _print_rev_recursion - affiche une chaîne en ordre inverse
 * @s: la chaîne à afficher
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
