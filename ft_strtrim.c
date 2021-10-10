#include "libft.h"
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
	str[k] = '\0';
	return (str);
}


char *ft_strtrim(char const *s1, char const *set)
{	
	int i;
	char *str;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) - ft_strlen(set) + 1)));
	if (str == NULL)
		return (NULL);
	trimin(s1,set,str);			
	return (str);
	return ((char *)s1);
}
