#include "libft.h"

int ft_isalnum(int c)
{       
	if (c >= '0' && c <= '9' )
		return (c);
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);

	return (0);
}     
