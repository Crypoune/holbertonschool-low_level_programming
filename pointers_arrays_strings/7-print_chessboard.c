#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: tableau 8x8 de caractères représentant l’échiquier
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
