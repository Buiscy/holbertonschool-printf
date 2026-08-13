#include "main.h"

int _write (va_list args, int length)
{
    putchar(va_arg(args, int));
    return (length + 1);
}
