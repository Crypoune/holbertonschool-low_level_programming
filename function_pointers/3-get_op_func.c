#include "3-calc.h"

/**
 * get_op_func - retourne un pointeur vers
 * la fonction correspondant à l'opérateur
 * @s: l'opérateur sous forme de chaîne de caractères
 * Return: pointeur vers la fonction correspondant
 * à l'opérateur, sinon NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operators[] = {
		{"+", op_add },
		{"-", op_sub },
		{"*", op_mul },
		{"/", op_div },
		{"%", op_mod },
		{NULL, NULL}
	};

	int i = 0;

	while (operators[i].op != NULL)
	{
		if (strcmp(s, operators[i].op) == 0)
			return (operators[i].f);
		i++;
	}

	return (NULL);
}
