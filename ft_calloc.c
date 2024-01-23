/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:39:07 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/23 17:11:22 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	if (((long long)size <= 0 || (long long)size >= INT_MAX) || ((long long)count <= 0 || (long long)count >= INT_MAX))
		return (NULL);
	rtn = malloc(size * count);
	if (rtn)
		ft_bzero(rtn, (size * count));
	return (rtn);
}
