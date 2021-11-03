/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:01 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 17:08:02 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' - n % 10, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n *= -1, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd('0' + n % 10, fd);
	}
}
