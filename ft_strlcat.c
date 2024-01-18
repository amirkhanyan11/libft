/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:58:30 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/18 22:08:22 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// char dest[30];
	// memset(dest, 0, 30);
	// char *src = (char *)"AAAAAAAAA";
	// memset(dest, 'B', 4);
	// printf("%d\n", ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lim;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	lim = dstlen + srclen;
	if (dstsize < dstlen)
		return (srclen + dstsize);
	if (!(dst == 0 || src == 0))
		(void)ft_strlcpy(dst + dstlen, src, (dstsize - dstlen + 1));
	dst[lim - 1] = '\0';
	return (lim);
}
