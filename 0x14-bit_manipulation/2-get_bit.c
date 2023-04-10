#include "main.h"

/**
 * get_bit - returning the value of a bit at an index in a decimal number
 * @n: Is the number to search
 * @index: Is the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_var;

	if (index > 63)
		return (-1);

	bit_var = (n >> index) & 1;

	return (bit_var);
}
