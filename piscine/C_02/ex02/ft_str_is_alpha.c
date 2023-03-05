/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:51:28 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 23:03:53 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
    char a[] = "iwoeuu";
    char b[] = "123iwoeuu";
    char c[] = "123";
	char d[] = "zxcdfgdfg";

    printf("%d\n", ft_str_is_alpha(a));
    printf("%d\n", ft_str_is_alpha(b));
    printf("%d\n", ft_str_is_alpha(c));
    printf("%d\n", ft_str_is_alpha(d));
}*/
