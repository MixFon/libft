/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numwr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:05:21 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 12:11:20 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numwr(char const *s, char c)
{
	int	num;

	num = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			num++;
		s++;
	}
	if (*(s - 1) && *(s - 1) != c)
		num++;
	return (num);
}
