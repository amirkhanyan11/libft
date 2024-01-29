/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:49:10 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/29 17:06:10 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	ft_lstlast(*lst)->next = new;
	new->next = NULL;
}
