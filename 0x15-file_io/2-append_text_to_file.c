#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: function fails -1 else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wte, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (opn == -1 || wte == -1)
		return (-1);

	close(opn);

	return (1);
}
