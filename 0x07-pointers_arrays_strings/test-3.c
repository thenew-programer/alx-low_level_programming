#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "geeks for geeks";
    char *f = "geek";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
