#include "libft.h"
static void putitoa(int n,int digit,char *str)
{
	str[digit] = '\0';
	digit--;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		digit++;
	}
	while (n > 0)
	{
		if (n < 10)
		{
			str[digit] = 48 + n;
			break ;
		}
		str[digit] = 48 + (n % 10);
		n = n / 10;
		digit--;
	}
}
char *ft_itoa(int n)
{
	int digit;
	char *str;
	int n2;

	n2 = n;
	digit = 0;
	if (n == -2147483648)
	{
		str =  ft_strdup("-2147483648");
		return (str);
	}
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (n < 0)
		n2 = n2 * -1;
	while (n2 > 0 && digit++ != 11)
		n2 /= 10;
	if (n < 0)
		digit++;
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	putitoa(n,digit,str);
	return (str);
}
