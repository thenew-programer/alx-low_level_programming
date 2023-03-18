#include <stdio.h>

#define SP ' '
#define COMMA ','
/**
* main - Entry point
* Return: 0
*/

int main(void)
{
int i, j, k, l, x, size;
for (i = 48; i < 57; ++i)
{
for (j = 48; j <= 57; ++j)
{
for (k = 48; k <= 57; ++k)
{
for (l = 48; l <= 57; ++l)
{
if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
{
continue;
}
else if (((i == k) && (j == l)) || ((k == l) && (l == i)))
{
continue;
}
else if ((i > j) || (i > k) || (i > l) || (j > l) || (j > k) || (k > l))
{
continue;
}
putchar(i);
putchar(j);
putchar(SP);
putchar(k);
putchar(l);
putchar(COMMA);
putchar(SP);
}
}
}
}

x = 55;
size = 5;
while (1)
{
for (i = 0; i < size; i++)
{
if (i == 4)
{
x = 6;
}
putchar(x + i);
}
break;
}
return (0);
}















return (0);
}











