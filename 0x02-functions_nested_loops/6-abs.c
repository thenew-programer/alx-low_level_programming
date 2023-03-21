#include "main.h"

/**
 * _abs - return the absolute value of n
 * @n: the parameter to the function
 * Return: abs value
 */

int _abs(int n)
{
    if (n >= 0)
    {
        return (n);
    }
    else
    {
        return (n * -1);
    }
}
