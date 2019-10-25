
#include "libft.h"

void	ft_bzero(void *s, int n)
{
	unsigned char * str;
	int 			i;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}

