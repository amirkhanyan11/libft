/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/18 22:07:35 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/aamirkha/Desktop/libft/libft.h"


int main()
{
	char dest[30];
	memset(dest, 0, 30);
	char *src = (char *)"AAAAAAAAA";
	memset(dest, 'B', 4);
	printf("%d\n", ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));
}
