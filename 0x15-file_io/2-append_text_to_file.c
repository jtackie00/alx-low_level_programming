#include "main.h"

/**
 * append_text_to_file - Appending text at the end of a file.
 * @filename: Is a pointer to the name of the file.
 * @text_content: Is the string to add to the end of the file.
 *
 * Return: function fails or filename is NULL -1.
 *         If the file does not exist the user lacks write permissions -1.
 *         Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
