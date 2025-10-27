#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre (de 0 à 9)
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
