#include "holberton.h"
/**
 * puts2  -  change pointers.
 * @str: value of int
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
