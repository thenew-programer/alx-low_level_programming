#include "main.h"

/**
* read_textfile - reads file and prints it to STDOUT
* @filename: pointer to the file.
* @letters: number of bytes to print.
* Return: the number of bytes printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byteRead, byteWrite;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer)
		return (0);

	byteRead = read(fd, buffer, letters);
	byteWrite = write(STDOUT_FILENO, buffer, byteRead);

	close(fd);
	free(buffer);
	return (byteWrite);
}
