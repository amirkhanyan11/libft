/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:05:38 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/24 01:10:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_ft_is_space(char c)
{
	return (c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

static	int	_ft_to_digit(char c)
{
	return (c - '0');
}

int	ft_atoi(const char *str)
{
	long long	res;
	int			sign;

	while (_ft_is_space(*str))
		str++;
	sign = 1;
	res = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (res > INT_MAX || res < INT_MIN)
			return (0);
		res = ((res * 10) + _ft_to_digit(*str));
		str++;
	}
	return (sign * res);
}
