/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_char_wchar.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 10:26:56 by widraugr          #+#    #+#             */
/*   Updated: 2021/07/23 11:55:53 by mixfon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create string type wchar_t
*/

wchar_t	*ft_strnew_char_wchar(wchar_t c, size_t len)
{
	wchar_t	*ptr;

	ptr = ft_strnew_wchar(len);
	ptr = (wchar_t *)ft_memset_wchar((wchar_t *)ptr, c, len);
	return (ptr);
}
