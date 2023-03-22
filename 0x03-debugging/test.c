#include <stdio.h>
#include "main.h"

int main(void)
{
    int a, b, c;
    int largest;
    a = 0;
    b = 3;
    c = -6;
    largest = largest_number(a, b, c);
    printf("%d is the largest number\n", largest);

    return (0);
}
