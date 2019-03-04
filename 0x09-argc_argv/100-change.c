#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - print argv
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	int count = 1, count2, total = 0;

	if (argc < 1)
		printf("%d\n", 0);

	for (; count < argc; count++)
	{
		total += atoi(argv[count]);
	}
	printf("%i\n", total);
	return (0);
}
