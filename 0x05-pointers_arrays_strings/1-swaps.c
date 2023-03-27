#include "main.h"

/**
 * swap_int - this func swaps two int
 * @a: the first parameter
 * @b: the second parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
