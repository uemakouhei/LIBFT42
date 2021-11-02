/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:41:51 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 16:42:29 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pt;
	unsigned const char	*srcpt;

	srcpt = (unsigned char *)src;
	pt = (unsigned char *)dst;
	if (pt == NULL && srcpt == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		len = len / sizeof(srcpt[0]);
		while (len-- > 0)
			pt[len] = srcpt[len];
	}
	return (dst);
}
