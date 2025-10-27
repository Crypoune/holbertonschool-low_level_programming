#include <unistd.h>

/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: caractère à écrire
 *
 * Return: 1 si succès, -1 sinon
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
