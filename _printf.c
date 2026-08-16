#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char * const format, ...)
{

	const char *p;
	va_list args;
	const char *s;
	int length;
	int c;
	int i;

	length = 0;
	p = format;

	va_start(args, format);
/** while the address of p is not NULL and the value of p is not equal to the null character */
	while (p != NULL && *p != '\0')
	{
		if (*p != '%')
		{
			write(1, p, 1);
			length++;
		}
		else
		{
			switch (*(p + 1))
			{
				case 'c':
					c = va_arg(args, int);
					/**"Go to the memory address of c and write 1 byte from there to stdout."
					/* file_descriptor, address_of_data, number_of_bytes */
					write(1, &c, 1);
					length++;
					p++;
					break;

				case 's':
					s = va_arg(args, char *);
					/** checking NULL before dereferencing */
					if (s == NULL)
					{
						s = "(null)";
					}

					while (*s != '\0')
					{
						write(1, s, 1);
						length++;
						s++;
					}
					p++;
					break;

				case '%':
					write(1, "%", 1);
					length++;
					p++;
					break;

				case 'i':
				case 'd':
					i = va_arg(args, int);
					length += int print_int (i);
					p++;
					break;
					
			}
		}
		p++;
	}
	va_end(args);
	
	return (length);
}
