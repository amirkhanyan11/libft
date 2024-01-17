/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:22:14 by kali              #+#    #+#             */
/*   Updated: 2024/01/18 01:23:14 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

size_t	ft_strlen(const char *str);
int	ft_isascii(int c);

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	if (str == 0 || !ft_isascii(c))
		return (0);
	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
