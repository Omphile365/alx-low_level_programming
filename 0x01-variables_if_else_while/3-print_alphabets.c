#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;
	char a;

	for (i = 'a' ; <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
