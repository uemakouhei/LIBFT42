#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	char *str;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < (start + len))
			len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) *  (len + 1));
	if (str == NULL)
		return(0);
	while (start-- != 0)
		s++;
	while (*s != '\0' && len-- != 0)
		str[i++] = *s++;	
	str[i] = '\0';
	return (str);
}
