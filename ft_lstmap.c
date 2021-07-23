/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 09:19:56 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 12:16:04 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*firptr;

	if (!lst)
		return (NULL);
	newlist = f(lst);
	firptr = newlist;
	while (lst->next)
	{
		lst = lst->next;
		newlist->next = f(lst);
		if (newlist->next == NULL)
			return (NULL);
		newlist = newlist->next;
	}
	return (firptr);
}
