/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:40:22 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 16:41:38 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*srcpt;
	char		*pt;

	srcpt = (char *)src;
	pt = (char *)dst;
	if (pt == NULL && srcpt == NULL)
		return (NULL);
	while (n--)
	{
		*pt++ = *srcpt++;
	}
	return (dst);
}
