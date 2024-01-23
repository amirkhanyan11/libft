/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:13:52 by kali              #+#    #+#             */
/*   Updated: 2024/01/24 01:53:44 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_ft_min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	return (b);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*dst;
// 	size_t	srclen;

// 	srclen = ft_strlen(s);
// 	if (start > srclen - 1)
// 	{
// 		dst = malloc(1);
// 		*dst = '\0';
// 		return (dst);
// 	}
// 	dst = malloc(_ft_min(len, srclen) + 1);
// 	if (dst)
// 		(void)ft_strlcpy(dst, s + start, _ft_min(len, srclen) + 1);
// 	return (dst);
// }
