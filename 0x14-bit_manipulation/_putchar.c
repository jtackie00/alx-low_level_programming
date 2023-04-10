#include "main.h"
#include <unistd.h>
/**
 * _putchar - This will write the character c to stdout
 * @c: Is character to print
 *
 * Return: successfull, 1 is returned.
 * error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
