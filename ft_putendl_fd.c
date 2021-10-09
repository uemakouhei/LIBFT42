#include "libft.h"
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd)
{
	char ll;

	ll = '\n';
	if (!s)
		return ;
	ft_putstr_fd(s,fd);
	write(2,&ll,2);
}
