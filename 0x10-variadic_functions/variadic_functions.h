#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - a struct type defining a printer
 * @print: a function pointer to a function that prints
 * a data type corresponding to symbol
 * @symbol: a symbol representing a data type
 */
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);

} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
