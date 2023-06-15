#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %u 1 byte(s)\n", sizeof(char));
printf("size of an int: %u 4 byte(s)\n", sizeof(int));
printf("size of a long int: %u 4 byte(s)\n", sizeof(long int));
printf("size of a long long int: %u 8 byte(s)\n", sizeof(long long int));
printf("size of a float: %u 4 byte(s)\n", sizeof(float));
return (0);
}
