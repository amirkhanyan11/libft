/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/26 15:32:36 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/aamirkha/Desktop/libft/libft/libft.h"

int main()
{
	char **tab = ft_split("  tripouille  42  ", ' ');

	int i = 0;

	while(tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return 0;
}
