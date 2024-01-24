/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:13:52 by kali              #+#    #+#             */
/*   Updated: 2024/01/24 20:21:56 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_ft_min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	return (b);
}

static char	*_allocate_null(void)
{
	char	*dst;

	dst = (char *)malloc(1);
	*dst = '\0';
	return (dst);
}

static char	*_allocate(char const *s, size_t dstlen)
{
	char	*dst;

	dst = (char *)malloc(dstlen + 1);
	if (dst)
		(void)ft_strlcpy(dst, s, dstlen + 1);
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(s);
	if (start > srclen)
		return (_allocate_null());
	return (_allocate(s + start, _ft_min(srclen - start, len)));
}
