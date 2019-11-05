/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:27:07 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/04 18:57:12 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		new->content = NULL;
	else
	{
		if (!(new->content = malloc(sizeof(content))))
			return (NULL);
		ft_memcpy((new->content), content, sizeof(content));
	}
	new->next = NULL;
	return (new);
}
