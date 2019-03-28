/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:09:24 by widraugr          #+#    #+#             */
/*   Updated: 2018/12/11 15:29:18 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strs;

	i = 0;
	strd = (unsigned char *)dst;
	strs = (unsigned char *)src;
	while (i < n)
	{
		((unsigned char *)strd)[i] = ((unsigned char *)strs)[i];
		if (((unsigned char *)strs)[i] == (unsigned char)c)
		{
			dst = strd;
			return (&dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
