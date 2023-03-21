#include <stdio.h>

#define MAX 98
/**
* print_to_98 - print from 11 to 98
* @n: the parameter that takes the function and start counting form
* Return: 0as always
*/
void print_to_98(int n)
{
if (n == MAX)
{
printf("98\n");
}
while(n != MAX)
{
if (n > MAX)
{
printf("%d, ", n);
if (n == 99)
{
printf("98\n");
}
n--;
}
else
{
printf("%d, ", n);
if (n == 97)
{
printf("98\n");
}
n++;
}

}
}
