#include "main.h"

/**
* factorial - return the factorial of the number provided.
* @n: the parameter.
* Return: the factorial of n.
*/

int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 1)
{
return (-1);
}
return (n * factorial(n - 1));
}
