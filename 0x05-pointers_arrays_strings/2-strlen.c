#include "main.h"

/**
 * _strlen - returns the length of strn.
 * @s: char to check
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /*the counter should start from 0*/

	for (; *s++;)
		a++;
	return (a);
}
