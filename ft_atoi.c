/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 00:44:03 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 16:49:56 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	output(const char *number, long long index, int symbtyp);

int	ft_atoi(const char *str)
{
	int			answer;
	int			type;
	long long	i;

	i = 0;
	type = 1;
	answer = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			type = -1;
		i++;
	}
	answer = output(str, i, type);
	return (answer);
}

static int	output(const char *number, long long index, int symbtyp)
{
	long long	num;

	num = 0;
	while (number[index] != 0)
	{
		if (num * symbtyp > 2147483647)
		{
			return (-1);
		}
		else if (num * symbtyp < -2147483648)
		{
			return (0);
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

#include<stdio.h>
int main(void)
{
	char    n[40];
	sprintf(n, "%li", LONG_MAX);

	int             i1 = atoi(n);
	int             i2 = ft_atoi(n);
	if (i1 == i2)
		puts("TEST_SUCCESS");

	char    n2[40];
	sprintf(n, "%li", LONG_MIN);

	int             i21 = atoi(n2);
	int             i22 = ft_atoi(n2);
	if (i21 == i22)
		puts("TEST_SUCCESS");
	char    n3[40] = "99999999999999999999999999";

	int             i13 = atoi(n3);
	int             i23 = ft_atoi(n3);
	if (i13 == i23)
		puts("TEST_SUCCESS");


	char    n4[40] = "99999999999999999999999999";

        int             i14 = atoi(n4);
        int             i24 = ft_atoi(n4);
        if (i14 == i24)
                puts("TEST_SUCCESS");
}
