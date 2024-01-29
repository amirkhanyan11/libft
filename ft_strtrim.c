/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:19:38 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/29 20:01:41 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_move_ptrs(char **left, char **right, char const *set);
static char	*_allocate_null(void);
static char	*_allocate(char const *src, size_t const dstsize);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*left;
	char	*right;

	if (!s1 || !set)
		return (NULL);
	left = (char *)s1;
	right = ((char *)s1) + ft_strlen(s1) - 1;
	_move_ptrs(&left, &right, set);
	if (left > right)
		return (_allocate_null());
	return (_allocate(left, right - left + 2));
}

static	void	_move_ptrs(char **left, char **right, char const *set)
{
	while (((*left) != '\0') && ft_memchr(set, **left, ft_strlen(set)))
		++(*left);
	while (((*right) >= (*left)) && ft_memchr(set, **right, ft_strlen(set)))
		--(*right);
}

static char	*_allocate_null(void)
{
	char	*dst;

	dst = (char *)malloc(1);
	*dst = '\0';
	return (dst);
}

static	char	*_allocate(char const *src, size_t const dstsize)
{
	char	*dst;

	dst = (char *)malloc(dstsize);
	if (dst)
		ft_strlcpy(dst, src, dstsize);
	return (dst);
}
