#include "libft.h"

int ft_tolower(int c)
{
	  if (c >= 'A' && c <= 'B')
        {
                c = c + 32;
        }

        return (c);

}
