/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:27:32 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/05 15:03:35 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*list;

	list = *lst;
	*lst = NULL;
	if (list->next == NULL)
	{
		(*del)(list);
		free(list);
	}
	while (list->next)
	{
		tmp = list->next;
		(*del)(list);
		free(list);
		list = tmp;
	}
}
