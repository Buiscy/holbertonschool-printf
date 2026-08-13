#include "main.h"

int _printf(const char *format, ...)
{
 int i;
 va_list args;

 if (!format)
    return(NULL);

va_start (args, format);
while ()
}

void print_all(const char * const format, ...)
{

	const char *p;
	va_list args;
	const char *s;
	const char *separator;

	separator = "";

	p = format;

	va_start(args, format);

	while (p != NULL && *p != '\0')
	{
        if (va_arg[i] == '%')
        {
		    switch (*p)
		    {
                case 'c':
                    printf("%s%c", separator, va_arg(args, int));
                    separator = ", ";
                    break;

                case 'i':
                    printf("%s%d", separator, va_arg(args, int));
                    separator = ", ";
                    break;

                case 'f':
                    printf("%s%f", separator, va_arg(args, double));
                    separator = ", ";
                    break;

                case 's':
                    s = va_arg(args, char *);

                    if (s == NULL)
                    {
                        s = "(nil)";
                    }

                    printf("%s%s", separator, s);
                    separator = ", ";
                    break;

            }
        }

		p++;
	}

	va_end(args);
	printf("\n");
}