/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:24:42 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/27 20:27:48 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

static void	_lstiter(t_list *lst, void (*f)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
		_lstiter(lst, f);
}

static void	_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	_lstiter(lst->next, f);
}
