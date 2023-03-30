#include "main.h"

/**
* reverse_array - reverses an array of ints
*
* @a: array src
* @n: the length of the array
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
int i, j, tmp;

j = n - 1;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j--] = tmp;
}
}
