#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _write (va_list args, int length);

#endif