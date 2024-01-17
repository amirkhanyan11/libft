/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:54:33 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 01:17:18 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int	ft_isascii(int c);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;
	if (s == 0 || !ft_isascii(c))
		return (0);
	i = 0;
	str = (const char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
