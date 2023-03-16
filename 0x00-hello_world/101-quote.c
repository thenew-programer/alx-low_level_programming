#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: prints a string to the screen
 * Return: 0
 */

int main(void)
{
char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(string);
write(2, string, len);
return (1);
}
