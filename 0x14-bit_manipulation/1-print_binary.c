#include "main.h"

/**
 * print_binary - printing the binary equivalent of a decimal number
 * @n: Is the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, counting = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			_putchar('1');
			counting++;
		}
		else if (counting)
			_putchar('0');
	}
	if (!counting)
		_putchar('0');
}
