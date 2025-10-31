#include "main.h"

/**
 * string_toupper - Change toutes les lettres minuscules
 * d'une chaîne en majuscules
 * @str: chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
