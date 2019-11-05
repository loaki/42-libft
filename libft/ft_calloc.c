/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:33:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/04 18:57:44 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tab;
	unsigned int	i;

	i = 0;
	tab = NULL;
	if (!(tab = (void *)malloc(sizeof(size) * nmemb)))
		return (NULL);
	while (i <= nmemb)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
