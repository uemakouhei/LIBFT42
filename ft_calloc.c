/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 07:05:59 by kuema             #+#    #+#             */
/*   Updated: 2021/11/07 01:02:19 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;
	size_t	allocate;

	allocate = count * size;
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
	if (allocate / count < size)
		return (NULL);
	pt = malloc(allocate);
	if (pt == NULL)
	{
		return (NULL);
	}
	ft_bzero(pt, allocate);
	return (pt);
}
