#include <stdio.h>

/**
 * main - affiche le nombre d’arguments passés au programme
 * @argc: nombre d’arguments
 * @argv: tableau contenant les arguments (non utilisé)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
