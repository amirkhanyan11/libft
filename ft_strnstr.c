/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/23 00:17:12 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_ft_min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	return (b);
}

	// char * empty = (char*)"";

	// printf("%d\n", ft_strnstr(empty, "", 0) == empty);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lim;
	size_t	i;
	size_t	len_hstk;
	size_t	len_ndl;

	len_hstk = ft_strlen(haystack);
	len_ndl = ft_strlen(needle);
	if (!needle || !haystack)
		return ((char *)haystack);
	lim = _ft_min(len, len_hstk);
	if (len_ndl <= lim)
	{
		i = 0;
		while (i <= (lim - len_ndl))
		{
			if (!strncmp(haystack + i, needle, len_ndl))
				return ((char *)haystack + i);
			i++;
		}
	}
	return (0);
}
