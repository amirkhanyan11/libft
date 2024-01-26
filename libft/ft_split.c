/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:21:48 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/26 15:32:22 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_count_words(char const *s, char const c);
static size_t	_current_len(char const **str, char const c);
static char		**_allocate(char const *str, char const c, size_t const SIZE);
static void		_skip_delimiters(char const **str, char const c);

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (_allocate(s, c, _count_words(s, c)));
}

static	size_t	_count_words(char const *s, char const c)
{
	size_t	words;
	short	flag;

	words = 0;
	flag = 0;
	_skip_delimiters(&s, c);
	while (*s)
	{
		if (*s != c)
			flag = 1;
		else if (*s == c && flag)
		{
			words++;
			flag = 0;
		}
		s++;
	}
	return (flag + words);
}

static	size_t	_current_len(char const **str, char const c)
{
	size_t	len;

	len = 0;
	while (**str && **str != c)
	{
		len++;
		(*str)++;
	}
	return (len);
}

static void	_skip_delimiters(char const **str, char const c)
{
	while (**str && **str == c)
		(*str)++;
}

static	char	**_allocate(char const *str, char const c, size_t const SIZE)
{
	char	**arr;
	char	*tmp;
	size_t	current_len;
	size_t	i;

	arr = (char **)malloc((SIZE + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr[SIZE] = NULL;
	i = 0;
	while (i < SIZE)
	{
		_skip_delimiters(&str, c);
		tmp = (char *)str;
		current_len = _current_len(&str, c) + 1;
		arr[i] = (char *)malloc(current_len);
		ft_strlcpy(arr[i], tmp, current_len);
		i++;
	}
	return (arr);
}
