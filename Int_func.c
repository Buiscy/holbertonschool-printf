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

	while (tmp / 1 > 9)
		{
			i = temp % 10;
			digit = i + '0';

		}
}

/*
char * p;
*/