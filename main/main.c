/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:46 by aamirkha          #+#    #+#             */
/*   Updated: 2024/01/23 00:03:14 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/kali/Desktop/libft/libft.h"

int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	//char * empty = (char*)"";

	printf("%d\n", ft_strnstr(haystack, needle, 0) == 0);
}
