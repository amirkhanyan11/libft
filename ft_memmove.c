/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:14:29 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/22 16:09:01 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdup(char *src, size_t len)
{
	char	*dest;
	size_t	i;

	if (src == 0)
		return (0);
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*rtn;
	char	*t_src;

	t_src = ft_strdup((char *)src, len);
	rtn = dst;
	if (t_src != 0)
		rtn = ft_memcpy(dst, t_src, len);
	free(t_src);
	return (rtn);
}
