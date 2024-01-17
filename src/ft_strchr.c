/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:15:26 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 01:18:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *str, int c)
{
	return ((char *)ft_memchr(str, c, ft_strlen(str) + 1));
}
