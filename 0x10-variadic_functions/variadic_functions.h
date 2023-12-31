#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

void printchar(va_list charlist);
void printinteger(va_list charlist);
void printfloat(va_list charlist);
void printstring(va_list charlist);

typedef struct characters
{
        char *arguments;
        void (*ptrfunc)(va_list);
} characters;

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
