/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:29:41 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/27 19:25:55 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
