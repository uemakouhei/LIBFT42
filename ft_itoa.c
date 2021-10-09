#include "libft.h"
static void putitoa(int n,int digit,char *str)
{
	int i;

	i = digit;
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
}
char *ft_itoa(int n)
{
	int digit;
	char *str;
	int n2;

	n2 = n;
	digit = 0;
	 if (n < 0)
                n2 = n2 * -1;
	while (n2 > 0)
	{
		digit++;
		n2 /= 10;
	}
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	putitoa(n,digit,str);
	return (str);
}
