#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: charcter
*/

int _strlen_recursion(char *s)
{
	char nr = s;

	if (*s > '\0')
	{
		nr += _strlen_recursion(s + 1) + 1;
	}

	return (nr);
}
