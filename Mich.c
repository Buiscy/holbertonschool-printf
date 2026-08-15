#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: can be c, i, f or s
 *
 * Return: nothing
 */
int _printf(const char * const format, ...)
{

	const char *p;
	va_list args;
	const char *s;
    int length;
    int c;

    length = 0;
	p = format;

	va_start(args, format);
/** while the address of p is not NULL and the value of p is not equal to the null character */
	while (p != NULL && *p != '\0')
	{
        if (*p != '%')
        {
            write(1, p, 1);
        }
        else
        {
		switch (*(p + 1))
		{
			case 'c':
                c = va_arg(args, int);
                /**"Go to the memory address of c and write 1 byte from there to stdout." */
                write(1, &c, 1);
                length++;
				break;

			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);

				if (s == NULL)
				{
					s = "(nil)";
				}

				printf("%s%s", separator, s);
				separator = " ";
				break;
        }
		}

		p++;
	}

	va_end(args);
	printf("\n");
}