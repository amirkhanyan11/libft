/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:07:25 by kali              #+#    #+#             */
/*   Updated: 2024/01/26 21:35:19 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char const	*str1;
	char const	*str2;

	if (!n)
		return (0);
	str1 = (char const *)s1;
	str2 = (char const *)s2;
	while (n > 1)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	return ((const unsigned char)*str1 - (const unsigned char)*str2);
}
