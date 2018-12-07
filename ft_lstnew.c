/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:04:14 by widraugr          #+#    #+#             */
/*   Updated: 2018/12/07 15:27:23 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newl;

	if (!(newl = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		newl->content = NULL;
		newl->content_size = 0;
		newl->next = NULL;
		free(newl);
	}
	else
	{
		newl->content = ft_strdup(content);
		newl->content_size = content_size;
		newl->next = NULL;
	}
	return (newl);
}
