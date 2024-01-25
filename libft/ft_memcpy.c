/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:11:25 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/25 16:04:04 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*t_dst;
	char	*t_src;

	t_dst = (char *)dst;
	t_src = (char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (n)
	{
		*(t_dst++) = *(t_src++);
		n--;
	}
	return (dst);
}
