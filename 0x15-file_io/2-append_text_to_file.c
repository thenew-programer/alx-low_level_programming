#include "main.h"
#include <stdio.h>

#define SUCCESS 1
#define FAILURE -1

/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of the file.
* @text_content: the content to append.
* Return: 1 On success, -1 On failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	/* File descriptor */
	int fd;

	/* Check for edge cases */
	if (!filename || !text_content)
		return (FAILURE);

	/* Try open the file if exists without*/
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd < 2)
		return (FAILURE);

	/* Append to the file using the fd return from open()*/
	write(fd, text_content, strlen(text_content));

	return (SUCCESS);
}
