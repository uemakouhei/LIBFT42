#include "libft.h"
#include<stdio.h>
static char     **ft_clear(char **str, size_t n);
static int splitlen(char const *str,char ch);
static char *strmakedo(char const *s,char c);
static char *strmake(char const *s,int positiondigit,char c);
char **ft_split(char const *s, char c)
{
	size_t strslen;
	char **spstrs;
	size_t i;

	i = 0;
	strslen =  splitlen(s,c);
	if (s == NULL)
		return (NULL);
	spstrs = (char **)malloc(sizeof(char *) * (strslen + 1));
	while (i < strslen)
	{
		spstrs[i] = strmake(s,i,c);
		if (spstrs[i] == NULL)
		{
			ft_clear(spstrs,i + 1);
			return(NULL);
		}
		i++;
	}
	spstrs[i] = NULL;
	return (spstrs);    
}

static int splitlen(char const *str,char ch)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] == ch)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ch && str[i + 1] != ch && str[i + 1] != '\0')
			flag++;
		i++;
	}
	return (flag + 1);
}

static char *strmakedo(char const *s,char c)
{
	int i;
	int j;
	char  *str;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return(0);

	while(j != i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';

	return(str);
}


static char *strmake(char const *s,int positiondigit,char c)
{
	int position;
	int i;
	int j;

	i = 0;
	j = 0;
	position = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (position == positiondigit)
		{
			return(strmakedo(s + i,c));
		}
		if (s[i] == c && s[i + 1] != c)
			position++;
		i++;
	}
	puts("1");
	return(0);
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
	char **tab;
	tab = ft_split("     ", ' ');
	printf("%s\n",tab[0]);

}
