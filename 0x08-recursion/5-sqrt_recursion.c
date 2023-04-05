#include "main.h"

/**
* _sqrt_recursion - return the natural square root of a number.
* @n: the number.
* _sqrt_recursion_ex - function that helped me calc the sqrt of n.
* @x: parameter that heped me find the sqrt root of n.
* Return: the square root of n.
*/

int _sqrt_recursion_ex(int n, int x);

int _sqrt_recursion(int n)
{
if (n < 1)
{
return (-1);
}
return (_sqrt_recursion_ex(n, 1));
}

int _sqrt_recursion_ex(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x > n)
{
return (-1);
}
else
{
x++;
return (_sqrt_recursion_ex(n, x));
}
}
