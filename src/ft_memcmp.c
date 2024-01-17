/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:07:25 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 01:17:18 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int	ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((const char *)s1, (const char *)s2, n));
}
