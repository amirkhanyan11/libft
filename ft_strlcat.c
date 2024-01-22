/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:58:30 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/22 16:09:52 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// char dest[30];
	// memset(dest, 0, 30);
	// char *src = (char *)"AAAAAAAAA";
	// memset(dest, 'B', 4);
	// printf("%d\n", ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));

	// BBBB\0    AAAAAAAAA\0   6  BBBBA\0

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
	{
		return (dstsize + srclen);
	}
	(void)ft_strlcpy(dst + dstlen, src, (dstsize - dstlen));
	return (dstlen + srclen);
}
