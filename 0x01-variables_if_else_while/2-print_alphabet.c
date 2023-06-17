#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alpabet letters
 *
 * Return: Always 0 (success)
*/

int amin(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
