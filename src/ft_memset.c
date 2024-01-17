/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:46:44 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 01:17:18 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	if (b == 0 || len == 0)
		return (b);
	i = 0;
	str = (unsigned char*)b;
	while(str[i] && i < len)
	{
		str[i++] = (unsigned char)c;
	}
	return (b);
}
