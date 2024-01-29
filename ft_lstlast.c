/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:44:58 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/29 20:09:06 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*_get_lstlast(t_list *lst);
static int		_cycle_detect(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || _cycle_detect(lst))
		return (NULL);
	return (_get_lstlast(lst));
}

static t_list	*_get_lstlast(t_list *lst)
{
	if (!lst->next)
		return (lst);
	return (_get_lstlast(lst->next));
}

static int	_cycle_detect(t_list *lst)
{
	t_list	*s;
	t_list	*f;

	s = lst;
	f = lst;
	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (f == s)
			return (1);
	}
	return (0);
}
