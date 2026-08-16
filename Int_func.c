#include "main.h"

int print_int (int a)
{
	unsigned int i;
	unsigned int tmp;
	char minus = '-';
	char digit;
	


	if (a < 0)
	{
		write(1, &minus, 1);
		tmp = -a;
	}
	else
		tmp = (unsigned int) a;

	while (tmp > 9)
		{
			i = tmp % 10;
			digit = i + '0';
			write(1, &digit, 1)
			tmp = tmp / 10;
			if (tmp < 10)
				{
					digit = tmp + '0';
					write(1, &digit, 1)
				}
		}
}

/*
char * p;
*/