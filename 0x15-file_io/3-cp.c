#include "main.h"

#define BUFFER 1024 /* Size to read or write*/
#define ARG_ERROR 97 /* ARGUMENT ERROR*/
#define R_ERROR 98 /* READ ERROR*/
#define W_ERROR 99 /*WRITE ERROR */
#define C_ERROR 100	/* Close ERROR*/


/**
 * fileError - checks if there is no Error
 * while interacting with files
 * @fd1: fd for file_from
 * @fd2: fd for file_to.
 * @argv: name of files
 * Return: nothing.
 */

void fileError(int fd1, int fd2, char **argv)
{
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(R_ERROR);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(W_ERROR);
	}
}
/**
* main - entry point.
* Description: This program
* copies the content of a file
* to another file.
* @argc: argument counter.
* @argv: argument array.
* Return: 0
*/

int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t byteRead, byteWrite;
	char string[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (ARG_ERROR);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fileError(fd1, fd2, argv);

	byteRead = BUFFER;
	while (byteRead == BUFFER)
	{
		byteRead = read(fd1, string, BUFFER);
		if (byteRead == -1)
			fileError(-1, 0, argv);
		byteWrite = write(fd2, string, strlen(string));
		if (byteWrite == -1)
			fileError(0, -1, argv);
	}

	fd1 = close(fd1);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(C_ERROR);
	}
	fd2 = close(fd2);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(C_ERROR);
	}
	return (EXIT_SUCCESS);
}
