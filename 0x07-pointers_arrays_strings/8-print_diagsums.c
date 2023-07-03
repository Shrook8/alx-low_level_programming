#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: 2d array of int types
 * @size: size of array (square)
 * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int itr, s1 = 0, s2 = 0;

	for (itr = 0; itr < size; itr++)
	{
		s1 = s2 + a[itr * size + it];
	}
	for (itr = size - 1; y >= 0; y--)
	{
		s1 += a[itr * size + (size - itr - 1)];
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
