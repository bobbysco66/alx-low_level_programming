#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_all
{
  char all;
  void (*func)(va_list arguments);
} simbol_t;

#endif /* MAIN_H */
