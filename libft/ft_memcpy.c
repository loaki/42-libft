
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	while (n > 0)
	{
		str2[i] = str1[i];
		i++;
		n--;
	}
	dest = (void *)str2;
	return (dest);
}
