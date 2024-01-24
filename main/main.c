/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/24 22:29:12 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/aamirkha/Desktop/libft/libft.h"

int main()
{
	char *splitme = strdup("--1-2--3---4----5-----42");
	char **tab = ft_split(splitme, '-');

	int i = 0;
	while(tab[i])
	{
		printf("value : %s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	//printf("output : %d\n", tab[0] == NULL);
	free(tab);
	free(splitme);
}
