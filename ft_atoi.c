#include "libft.h"
#include <errno.h>
#include <limits.h>
int output(char *number, int index, int symbtyp)
{
	long num;

	num = 0;
	while (number[index] != 0)
	{
		if (num * symbtyp > 2147483647)
		{
			errno = 34;
			return ((int)LONG_MAX * -1);
		}
		else if (num * symbtyp < -2147483648)
		{
			errno = 34;
			return ((int)LONG_MIN * -1);
		}
		if (number[index] < 48 || number[index] > 57)
			break ;
		num += number[index] - 48;
		num *= 10;
		number++;
	}
	num /= 10;
	if (symbtyp == -1)
		num = 0 - num;
	return ((int)num);
}
int ft_atoi(char *str)
{
	int answer;
	int type;
	int i;

	i = 0;
	type = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i] == '-')
			type = -1;
	}
	answer = output(str, i, type);
	return (answer);
}

