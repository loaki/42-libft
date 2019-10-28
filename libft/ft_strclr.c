#include "libft.h"

void	ft_strclr(char *s)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		s[len] = '\0';
		len--;
	}
}
