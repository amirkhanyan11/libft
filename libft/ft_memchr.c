/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:54:33 by kali              #+#    #+#             */
/*   Updated: 2024/01/25 16:06:28 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	// if (s == 0)
	// 	return (0);
	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (const unsigned char)c)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (0);
}
