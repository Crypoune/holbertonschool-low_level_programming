#include "main.h"

/**
 * cap_string - Met en majuscule la première lettre de chaque mot
 * @str: chaîne de caractères à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}
	}

	return (str);
}
