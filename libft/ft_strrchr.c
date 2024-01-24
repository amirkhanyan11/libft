/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:22:14 by kali              #+#    #+#             */
/*   Updated: 2024/01/25 00:23:51 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	void	_swap(char	*a, char	*b)
// {
// 	char	c;

// 	c = *a;
// 	*a = *b;
// 	*b = c;
// }

// static	void	_reverse(char *str, int len)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= (len / 2))
// 	{
// 		_swap(str + i, str + len - 1 - i);
// 		i++;
// 	}
// }

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
