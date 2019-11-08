/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:51:54 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/08 13:22:46 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	i = start;
	dest = NULL;
	if (!s)
		return (dest);
	if (start > ft_strlen(s))
		i = 0;
	else
		while (s[i] && i < len)
			i++;
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
		while (s[start] && i < len)
		{
			dest[i] = s[start];
			start++;
			i++;
		}
	dest[i] = '\0';
	return (dest);
}
