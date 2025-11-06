#include "main.h"

/**
 * _puts_recursion - imprime une chaîne de caractères
 * suivie d’un saut de ligne.
 * @s: la chaîne à imprimer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
