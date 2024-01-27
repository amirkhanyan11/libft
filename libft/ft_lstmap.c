/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:28:28 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/27 20:38:30 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

static t_list	*_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	//if (lst && f && del)
	t_list	*head = ft_lstnew()
}

static t_list	*_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst)
		return (NULL);
}
