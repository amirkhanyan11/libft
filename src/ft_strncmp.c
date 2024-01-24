/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:11:17 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 17:59:05 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (str1 == 0 || str2 == 0 || n == 0)
		return (0);
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
