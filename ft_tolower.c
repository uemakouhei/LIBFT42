#include "libft.h"

int ft_tolower(int c)
{
	  if (c >= 'A' && c <= 'B')
        {
                return(c + 32);
        }

        return (c);

}
