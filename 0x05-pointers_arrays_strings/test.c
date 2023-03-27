#include <stdio.h>
#include "main.h"

int main()
{
    char *s = "My name is Youssef";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
