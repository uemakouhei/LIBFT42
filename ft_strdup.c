/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:51:18 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 16:51:20 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(src);
	if (src == NULL)
		return (NULL);
	if (*src == '\0')
		size = 0;
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	if (ptr)
	{
		ft_strlcpy(ptr, src, size + 1);
	}
	return (ptr);
}
