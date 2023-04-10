#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading text file print to STDOUT.
 * @filename: Is the text file being read
 * @letters: Is the number of letters to be read
 * Return: w- the actual number of bytes read and printed
 *        0 when there is failure in function or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (w);
}
