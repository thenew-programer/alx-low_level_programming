#include <stdlib.h>
#include <stdio.h>


/**
 * print_opcode - prints the opcode of a function
 *
 * @main: pointer to the main function
 * @bytes: the number of bytes we want
 *
 * Return: Nothing
 */

void print_opcode(int (*main)(int, char **), int bytes)
{
	int i;
	unsigned int opcode;
	int (*address)(int, char **) = main;

	for (i = 0; i < bytes; i++)
	{

		opcode = *(unsigned char *)address;
		if (i == bytes - 1)
		{
			printf("%.2x\n", opcode);
			continue;
		}
		printf("%.2x ", opcode);
		address++;
	}
}


/**
* main - prints the opcodes of its own main function.
* @argc: argument counter
* @argv: argument array
* Return: always 0
*/

int main(int argc, char **argv)
{
	int number_of_bytes;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		puts("Error");
		return (2);
	}

	number_of_bytes = atoi(argv[1]);
	print_opcode(main, number_of_bytes);
	return (0);
}


