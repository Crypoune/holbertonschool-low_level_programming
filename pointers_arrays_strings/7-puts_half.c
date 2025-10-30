#include "main.h"

/**
 * puts_half - affiche la deuxième moitié d'une chaîne
 * @str: chaîne de caractères à afficher
 *
 * Return: rien
 */
void puts_half(char *str)
{
	int i, len = 0, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
