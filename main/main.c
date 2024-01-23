/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/23 16:48:44 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/aamirkha/Desktop/libft/libft.h"

int main()
{
	void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};

	printf("%d\n", ft_calloc(SIZE_MAX, SIZE_MAX) == NULL);
}
