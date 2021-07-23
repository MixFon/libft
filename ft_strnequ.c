/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 10:02:45 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 11:57:13 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2 || i == n)
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (1);
}
