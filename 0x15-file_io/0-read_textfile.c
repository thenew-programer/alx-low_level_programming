#include "main.h"

/**
* read_textfile - reads file and prints it to STDOUT
* @filename: pointer to the file.
* @letters: number of bytes to print.
* Return: the number of bytes printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numOfBytes;
	size_t i;
	FILE *fptr;
	char c;

	if (!filename)
		return (0);

	fptr = fopen(filename, "r");
	if (!fptr)
		return (0);

	while ((c = getc(fptr)) != EOF && (letters > i))
	{
		_putchar(c);
		numOfBytes++;
		i++;
	}
	fclose(fptr);
	return (numOfBytes);
}
