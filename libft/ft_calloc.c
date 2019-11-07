/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:33:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/05 18:01:36 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tab;
	unsigned int	i;

	i = 0;
	if (!(tab = (void *)malloc(size * nmemb)))
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
