/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:22:14 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 18:41:46 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void _swap(char	*a, char	*b)
{
	char	c;
	c = *a;
	*a = *b;
	*b = c;
}

static void _reverse(char *str, int len)
{
	int	i;

	i = 0;
	while (i <= (len / 2))
	{
		_swap(str + i, str + len - 1 - i);
		i++;
	}
}

char	*ft_strrchr(const char *str, int c)
{
	int		offset;
	int		len;
	char	*tmp;

	len = ft_strlen(str);
	_reverse((char *)str, len + 1);
	tmp = ft_memchr(str, c, len + 1);
	offset = tmp - str;
	_reverse((char *)str, len + 1);
	if (tmp == 0)
		return (0);
	return ((char *)str + len - offset);
}
