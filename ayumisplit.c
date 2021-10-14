#include "libft.h"
#include<stdio.h>

static int      ft_world_count(const char *ss, char c);
static char     *ft_strup(const char *str, char c);
static char     **ft_put(char **res, const char *str, const int col, const char c);
static char     **ft_clear(char **res, size_t col_i);
char    **ft_split(char const *str, char c)
{
	char    **ss;
	int             count;

	if (str == NULL)
	{
		return (NULL);
	}
	count = ft_world_count(str, c);
	ss = (char **)malloc(sizeof(char *) * (count + 1));
	ss = ft_put(ss, str, count, c);
	if (ss == NULL)
	{
		puts("1");
		return (NULL);
	}
	ss[count] = NULL;
	return (ss);
}
static int      ft_world_count(const char *ss, char c)
{
	size_t  i;
	size_t  v;

	i = 0;
	v = 0;
	while (ss[i] != '\0')
	{
		if (ss[i] == c)
			i++;
		else
		{
			v++;
			while (ss[i] != '\0' && ss[i] != c)
				i++;
		}
	}
	return (v);
}
static char     *ft_strup(const char *str, char c)
{
	size_t  i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (ft_substr(str, 0, i));
}
static char     **ft_put(char **res, const char *str, const int col, const char c)
{
	size_t  i;
	int  j;

	i = 0;
	j = 0;
	while (j < col)
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		res[j] = ft_strup(str + i, c);
		if (res[j] == NULL)
		{
			return (ft_clear(res, j));
			puts("2");
		}
		i += ft_strlen(res[j]);
		j++;
	}
	return (res);
}
static char     **ft_clear(char **str, size_t n)
{
	while (n > 0)
	{
		free(str[n -1]);
		str[n -1] = NULL;
		n--;
	}
	free(str);
	return (NULL);
}



int main(void)
{
	int i;
	i = 0;
	char    *s;
	s = "split  ||this|for|me|||||!|";
	char    **result = ft_split(s, '|');
	while (i != 5)
	{
		printf("%s:mojisuu%lu\n",result[i],ft_strlen(result[i]));
		i++;
	}
}

