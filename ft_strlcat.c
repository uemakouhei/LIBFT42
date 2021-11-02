/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:43:25 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 16:44:07 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;

	if (dst == 0 || src == 0)
		return (ft_strlen(dst) + ft_strlen(src));
	len = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (len + i < dstsize - 1 && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	if (dstsize > len)
		dstsize = len;
	return (dstsize + ft_strlen(src));
}
