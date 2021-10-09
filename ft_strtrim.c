#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t ft_strlen(const char *s);

static char *trimin(const char *s,const char *set,char *str)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (*set == '\0')
		return ((char *)s);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{     
		j = 0;
		if (s[i] == set[j])
		{          
			while (s[i + j] == set[j])
			{                 
				j++;      
				if (set[j] == '\0')
					i = i + j;
			}              
		}
		str[k] = s[i];
		i++;
		k++;
	}  
	return (str);
}


char *ft_strtrim(char const *s1, char const *set)
{	
	int i;
	char *str;
	if (ft_strnstr(s1,set,ft_strlen(s1)) != 0)
	{
		i = 0;
		str =(char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
		if (str == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			trimin(s1,set,str);			
			i++;	
		}
		return (str);
	}
	return ((char *)s1);
}

