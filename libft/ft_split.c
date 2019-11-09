/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:44:16 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/09 16:18:45 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_sep(char c, char c2)
{
	if (c == c2)
		return (1);
	return (0);
}

static int		ft_nb(const char *str, char charset)
{
	int i;
	int nb_chaine;

	i = 0;
	nb_chaine = 0;
	while (str[i] && ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		nb_chaine++;
	}
	return (nb_chaine);
}

static char		*ft_create_str(const char *str, char charset)
{
	char	*str_ret;
	int		i;

	i = 0;
	while (str[i] && !ft_is_sep(str[i], charset))
		i++;
	if (!(str_ret = malloc((i + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (str[i] && !ft_is_sep(str[i], charset))
	{
		str_ret[i] = str[i];
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

char			**ft_split(char const *str, char charset)
{
	int		i;
	int		j;
	char	**liste;

	i = 0;
	j = 0;
	liste = 0;
	if (!str)
		return (NULL);
	if (!(liste = malloc((1 + ft_nb(str, charset)) * sizeof(char *))))
		return (0);
	while (str[i] && ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		liste[j] = ft_create_str(str + i, charset);
		j++;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
	}
	liste[j] = 0;
	return (liste);
}
