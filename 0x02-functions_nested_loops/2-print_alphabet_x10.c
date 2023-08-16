#include "main.h"

/**
 * print_alphabet_x10 - prints alphabrts 10 times in lowercase
 *
 * Return: 0 when successful
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 97 ; j <= 122 ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
