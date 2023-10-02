#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: the name of the file.
 * @text_content: Text to write.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, i);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
