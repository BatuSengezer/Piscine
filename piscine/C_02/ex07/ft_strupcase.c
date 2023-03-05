/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:33:19 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 23:57:05 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char test0[] = "abcd";
	char test1[] = "AbcdeF";
	char test2[] = "1234";

	printf("%s\n", ft_strupcase(test0));
    printf("%s\n", ft_strupcase(test1));
    printf("%s\n", ft_strupcase(test2));
	
}*/
