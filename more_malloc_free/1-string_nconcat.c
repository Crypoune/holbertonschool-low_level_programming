#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatène s1 et les n premiers octets de s2
 * @s1: première chaîne
 * @s2: seconde chaîne
 * @n: nombre de chars de s2 à copier
 *
 * Return: pointeur vers la nouvelle chaîne concaténée
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1 = 0, size2 = 0;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* longueur de s1 */
	while (s1[size1] != '\0')
		size1++;

	/* longueur de s2 */
	while (s2[size2] != '\0')
		size2++;

	/* si n dépasse taille de s2, on copie toute s2 */
	if (n > size2)
		n = size2;

	/* allocation */
	buff = malloc(sizeof(char) * (size1 + n + 1));
	if (buff == NULL)
		return (NULL);

	/* copie s1 */
	for (i = 0; i < size1; i++)
		buff[i] = s1[i];

	/* copie s2 (n caractères) */
	for (j = 0; j < n; j++)
		buff[i + j] = s2[j];

	buff[i + n] = '\0';

	return (buff);
}
