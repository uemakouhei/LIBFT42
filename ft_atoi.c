/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 07:09:10 by kuema             #+#    #+#             */
/*   Updated: 2021/11/07 05:11:54 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	output(const char *number, size_t index, int symbtyp)
{
	long	num;

	num = 0;
	while (number[index] != 0)
	{
		if (num * symbtyp > 2147483647)
		{
			return (LONG_MAX);
		}
		else if (num * symbtyp < -2147483648)
		{
			return (LONG_MIN);
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
	return (num);
}

int	ft_atoi(const char *str)
{
	int		type;
	size_t	i;

	i = 0;
	type = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			type = -1;
		i++;
	}
	return ((int)output(str, i, type));
}
