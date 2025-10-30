#include "main.h"

/**
 * print_rev - affiche une chaîne de caractères en ordre inverse
 * @s: pointeur vers la chaîne à afficher
 *
 * Description: cette fonction parcourt une chaîne jusqu'à la fin,
 * puis affiche les caractères en sens inverse, suivis d'un saut de ligne.
 *
 * Return: rien
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
