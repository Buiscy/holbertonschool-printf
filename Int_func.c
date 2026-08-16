#include "main.h"

int print_int (int a)
{
	unsigned int i;
	unsigned int tmp;
	char minus = '-';
	char zero = '0';
	char digit;
	int length;

	unsigned int index;
	char digits[10];
	length = 0;


	if (a < 0)
	{
		write(1, &minus, 1);
		tmp = 0u - (unsigned int) a;
		length++;
	}
	else if (a == 0)
	{
		write(1, &zero, 1);
		tmp = (unsigned int) a;
		length++;
	}
	else
		tmp = (unsigned int) a;

	index = 0;
	while (tmp > 0)
	{
		i = tmp % 10;
		digit = i + '0';
		digits[index] = digit;
		tmp = tmp / 10;
		index++;
		length++;
	}
	while(index != 0)
	{
		index--;
		write(1, &digits[index], 1);
	}
	return (length);
}

/*
char * p;
*/