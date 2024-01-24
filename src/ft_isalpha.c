/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:26:45 by kali              #+#    #+#             */
/*   Updated: 2024/01/22 16:10:38 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_is_upper(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

static	int	_is_lower(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_isalpha(int c)
{
	return (_is_upper(c) || _is_lower(c));
}
