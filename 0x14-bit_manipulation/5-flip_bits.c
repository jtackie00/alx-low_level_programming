#include "main.h"

/**
 * flip_bits - counting the number of bits to change
 * to get from one number to another
 * @n: Is the first number
 * @m: Is the second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counting = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = exclusive >> i;
		if (now & 1)
			counting++;
	}

	return (counting);
}
