#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98
 * starting with 0
 * @n: The value of the times table to be used
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
