#include "function_pointers.h"

/**
* print_name - prints a name
* @name: the name pointer
* @f: function pointer that will prints the name
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
