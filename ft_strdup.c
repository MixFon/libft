/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:47:16 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 12:03:43 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str_cop;

	i = 0;
	while (s1[i])
		i++;
	str_cop = (char *)malloc(sizeof(char) * (i + 1));
	if (str_cop == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str_cop[i] = s1[i];
		i++;
	}
	str_cop[i] = '\0';
	return (str_cop);
}
