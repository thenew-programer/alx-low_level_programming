#include "main.h"

#define SUCCESS 1
#define FAILURE -1

/**
* create_file - create a file.
* @filename: the name of the file.
* @text_content: content to write to the file.
* Return: 1 On Success, -1 Failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename || !text_content)
		return (FAILURE);


	printf("hello world\n");
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (FAILURE);


	printf("hello bitch\n");
	write(fd, text_content, strlen(text_content));
	return (SUCCESS);
}
