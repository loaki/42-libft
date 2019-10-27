
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	while (n > 0)
	{
		if (str1[i] == (unsigned char)c)
			return ((void *)&str1[i + 1]);
		str2[i] = str1[i];
		i++;
		n--;
	}
	return (NULL);
}
