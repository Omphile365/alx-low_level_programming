#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c: parameter to be checked
 *
 * Return: 1 if successful or 0 if not successful
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
