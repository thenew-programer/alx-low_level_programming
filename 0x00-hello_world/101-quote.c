#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a string to the screen
 * Return: 0
 */

int main(void)
{
    char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int length = 59;
    int fd = 1;
    int syscall = 1;
    int ret = 0;
    __asm__ (
            :"=a" (ret),
            :"=a" (syscall),
            :"=b" (fd),
            :"=c" (string),
            :"d" (length));
    return (1);
}
