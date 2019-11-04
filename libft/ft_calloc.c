/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:33:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/04 13:41:50 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	tab = NULL;
	if (!(tab = (void *)malloc(sizeof(size) * nmemb)))
		return (NULL);
	return (tab);
}
