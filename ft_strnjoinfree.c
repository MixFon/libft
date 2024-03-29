/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoinfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:34:50 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 11:53:08 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoinfree(char *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strcl(s2, '\n'));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		str[i] = *(s1 + i);
		i++;
	}
	while (*s2 && i < len)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	ft_strdel(&s1);
	str[i] = '\0';
	return (str);
}
