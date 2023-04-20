#ifndef VA_FUNC
#define VA_FUNC

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *seperator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
