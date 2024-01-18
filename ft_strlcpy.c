/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:43:07 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/18 21:31:16 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_ft_min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	return (b);
}

	// char dest[30];
	// memset(dest, 0, 30);
	// char *src = (char *)"AAAAAAAAA";
	// memset(dest, 'B', 4);
	// ft_strlcat(dest, src, 6) == 13

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	len;

	srcsize = ft_strlen(src);
	len = _ft_min(dstsize, srcsize + 1);
	if (dst == 0)
		return (srcsize);
	if (srcsize != 0)
		(void)ft_memmove(dst, src, len);
	dst[len - 1] = '\0';
	return (srcsize);
}
