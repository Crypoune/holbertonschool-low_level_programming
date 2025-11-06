#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: le caractère à afficher
 *
 * Return: 1 (succès), ou -1 (erreur)
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
