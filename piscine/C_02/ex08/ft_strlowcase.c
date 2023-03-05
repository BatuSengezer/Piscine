/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:58:28 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/24 00:02:51 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
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
	char test2[] = "MNKSDFKDFG";

	printf("%s\n", ft_strlowcase(test0));
    printf("%s\n", ft_strlowcase(test1));
    printf("%s\n", ft_strlowcase(test2));
	
}*/
