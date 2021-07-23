/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:38:15 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 11:55:38 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strnew_wchar(size_t size)
{
	wchar_t	*str;

	if (size == (size_t)(-1))
		return (NULL);
	str = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1));
	if (str == NULL)
		return (NULL);
	str = (wchar_t *)ft_memset(str, '\0', size + 1);
	return (str);
}
