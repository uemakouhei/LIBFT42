#include "libft.h"
static char     **ft_clear(char **str, size_t n);
static int splitlen(char const *str,char ch);
static char *strmakedo(char const *s,char c);
static char *strmake(char const *s,int positiondigit,char c);
char **ft_split(char const *s, char c)
{
	int strslen;
	char **spstrs;
	int i;

	i = 0;
	strslen =  splitlen(s,c);
	spstrs = (char **)malloc(sizeof(char *) * (strslen + 1));
	while (i < strslen)
	{
		spstrs[i] = strmake(s,i,c);
		i++;
	}
	spstrs[i] = NULL;
	if (spstrs == NULL)
		return(NULL);
	ft_clear(spstrs,i);
	return (spstrs);    
}

static int splitlen(char const *str,char ch)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch && str[i + 1] != ch && i != 0)
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
		if (s[i] == c && i != 0)
			break;
		i++;
	}
	str = (char *)malloc(sizeof(char) * i + 1);
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
	int flag;
	int i;
	int j;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (flag == positiondigit)
		{
			return(strmakedo(s + i,c));
		}
		if (s[i] == c && s[i + 1] != c)
			flag++;
		i++;
	}
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
