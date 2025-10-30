#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d'un saut de ligne
 * @str: pointeur vers la chaîne à afficher
 *
 * Description: cette fonction affiche chaque caractère de la chaîne
 * passée en paramètre, suivi d'un retour à la ligne.
 *
 * Return: rien
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
