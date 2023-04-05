#include "main.h"
/**
 * is_prime_number - return 1 if the number is prime otherwise 0.
 * @n: the number.
 * Return: 1 or 0.
 */

int check(int n, int othr);
int is_prime_number(int n)
{
    return (check(n, 2));
}

/**
 * check - check all number < a if they can divide it.
 * @n: int.
 * @othr: int
 * Return: integer
 */

int check(int n, int othr)
{
    if (othr >= n && n > 1)
    {
        return (1);
    }
    else if (n % othr == 0 || n <= 1)
    {
        return (0);
    }
    else
    {
        return (check(n, othr + 1));
    }
}
