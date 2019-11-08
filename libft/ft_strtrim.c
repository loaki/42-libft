/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:12:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/08 14:49:00 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == (char)*set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_isset(*s1, set))
		s1++;
	i = 0;
	len = 0;
	while (s1[i])
	{
		while (s1[i] && !ft_isset(s1[i], set))
			i++;
		len = i;
		while (s1[i] && ft_isset(s1[i], set))
			i++;
	}
	if (!(s2 = malloc(1 + len)))
		return (0);
	i = -1;
	while (++i < len)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
