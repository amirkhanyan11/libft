/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/22 18:41:16 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	_min(size_t a, size_t b, size_t c)
{
	if (a < b && a < c)
		return (a);
	if (b < a && b < c)
		return (b);
	return (c);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lim;

	lim = _min(len, ft_strlen(needle), ft_strlen(haystack));
	if (!needle || !haystack)
		return ((char *)haystack);
	if (len)
	{
		while (*(haystack + lim - 1))
		{
			if (!strncmp(haystack, needle, lim))
				return ((char *)haystack);
			haystack++;
		}
	}
	return (0);
}
