/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 07:05:59 by kuema             #+#    #+#             */
/*   Updated: 2021/11/06 21:35:39 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	overcheck(size_t count, size_t size)
{
	int		countbinsize;

	countbinsize = 0;
	while (count > 0)
	{
		count = count / 2;
		countbinsize++;
	}
	countbinsize--;
	size--;
	while (size)
	{
		if (countbinsize > 63)
			return (0);
		size--;
		countbinsize++;
	}
	return (1);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;

	if (count == 0 || size == 0)
	{
		pt = malloc(1);
		if (pt == NULL)
		{
			return (NULL);
		}
		ft_bzero(pt, 1);
		return (pt);
	}
	if (!(overcheck(size, count)))
		return (NULL);
	pt = malloc(count * size);
	if (pt == NULL)
	{
		return (NULL);
	}
	ft_bzero(pt, count * size);
	return (pt);
}
