/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:09:44 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 12:20:00 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_recstr(char *str, int neg)
{
	long int	i;
	size_t		n;
	char		cop[23];
	char		*rtnstr;

	n = 0;
	i = ft_strlen(str) - 1;
	if (neg < 0)
		cop[n++] = '-';
	if (i == -1)
		cop[n++] = '0';
	while (i >= 0)
	{
		cop[n] = str[i];
		n++;
		i--;
	}
	cop[n] = '\0';
	rtnstr = ft_strdup(cop);
	if (rtnstr == NULL)
		return (NULL);
	return (rtnstr);
}

char	*ft_itoa(intmax_t n)
{
	size_t			i;
	uintmax_t		num;
	int				neg;
	char			str[21];
	char			*rtnstr;

	i = 0;
	neg = 0;
	num = n;
	if (n < 0)
	{
		num = n * (-1);
		neg = -1;
	}
	while (num != 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	str[i] = '\0';
	rtnstr = ft_recstr(str, neg);
	if (rtnstr == NULL)
		return (NULL);
	return (rtnstr);
}
