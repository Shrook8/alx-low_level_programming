#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int itr, s1 = 0, s2 = 0;

	for (itr = 0; itr < size; itr++)
	{
		s1 = s1 + a[itr * size + itr];
	}
	for (itr = size - 1; itr >= 0; itr--)
	{
		s2 += a[itr * size + (size - itr - 1)];
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
