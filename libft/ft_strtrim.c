/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:12:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/05 13:53:52 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fromtocpy(char const *src, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char const) * (end - start + 1))))
		return (NULL);
	while (src[i] && start < end)
	{
		str[i] = src[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	while (s1[end])
		end++;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start++;
			i = -1;
		}
		if (s1[end] == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	return (ft_fromtocpy(s1, start, end));
}
