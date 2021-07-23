/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 13:28:34 by eskeleto          #+#    #+#             */
/*   Updated: 2021/07/23 12:24:56 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_concat_str(char *str1, char *str2)
{
	char	*result;
	int		i;
	int		j;

	i = -1;
	j = 0;
	result = (char *)malloc(sizeof(char)
			* (ft_strlen(str1) + ft_strlen(str2) + 1));
	while (str1[++i] != '\0')
	{
		result[j] = str1[i];
		j++;
	}
	free(str1);
	free(str2);
	i = 0;
	while (str2[i] != '\0')
	{
		result[j] = str2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
