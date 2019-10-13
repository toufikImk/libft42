/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:55:21 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 13:15:07 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cleanup(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		ft_memdel((void **)&lst);
		lst = tmp;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*first;

	elem = ft_lstnew(lst->content, lst->content_size);
	if (elem == NULL)
		return (NULL);
	elem = (*f)(elem);
	first = elem;
	while (lst->next)
	{
		lst = lst->next;
		elem->next = ft_lstnew(lst->content, lst->content_size);
		if (elem->next == NULL)
		{
			cleanup(first);
			return (NULL);
		}
		elem->next = (*f)(elem->next);
		elem = elem->next;
	}
	return (first);
}
