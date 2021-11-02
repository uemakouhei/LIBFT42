/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:53:40 by kuema             #+#    #+#             */
/*   Updated: 2021/11/02 17:15:19 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	splitlen(char const *str, char ch)
{
	size_t	i;
	size_t	v;

	i = 0;
	v = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			i++;
		else
		{
			v++;
			while (str[i] != '\0' && str[i] != ch)
				i++;
		}
	}
	return (v);
}

static char	*strmakedo(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (j != i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static char	*strmake(char const *s, size_t positiondigit, char c)
{
	size_t	position;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	position = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (position == positiondigit)
			return (strmakedo(s + i, c));
		if (s[i] == c && s[i + 1] != c)
			position++;
		i++;
	}
	return (NULL);
}

static char	**ft_clear(char **str, size_t n)
{
	while (n > 0)
	{
		free(str[n - 1]);
		str[n - 1] = NULL;
		n--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**spstrs;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	spstrs = (char **)malloc(sizeof(char *) * (splitlen(s, c) + 1));
	if (spstrs == NULL)
		return (NULL);
	while (i < splitlen(s, c))
	{
		spstrs[i] = strmake(s, i, c);
		if (spstrs[i] == NULL)
		{
			ft_clear(spstrs, i);
			return (NULL);
		}
		i++;
	}
	spstrs[splitlen(s, c)] = NULL;
	return (spstrs);
}
