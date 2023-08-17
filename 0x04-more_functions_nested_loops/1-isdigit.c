#include "main.h"

/**
 * _isdigit - function that checks for a digits
 *
 * @c: parameter to be checked
 *
 * Return: 1 on success or 0 when unsuccessful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
