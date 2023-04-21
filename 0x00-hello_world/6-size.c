#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof (a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof (b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof (c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof (d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof (e));
return (0);
}
