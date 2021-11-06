/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 07:09:10 by kuema             #+#    #+#             */
/*   Updated: 2021/11/06 19:03:05 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	output(const char *number, long long index, int symbtyp)
{
	long	num;

	num = 0;
	while (number[index] != 0)
	{
		if (num * symbtyp > 2147483647)
		{
			return ((int)LONG_MAX);
		}
		else if (num * symbtyp < -2147483648)
		{
			return ((int)LONG_MIN);
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
