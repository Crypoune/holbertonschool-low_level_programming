#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: pointeur vers la chaîne à convertir
 *
 * Description: cette fonction lit la chaîne `s` et extrait
 * le premier nombre trouvé, en tenant compte des signes '+' et '-'.
 * Si aucun chiffre n’est trouvé, elle retourne 0.
 *
 * Return: l’entier converti à partir de la chaîne
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = (num * 10) + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (num * sign);
}
