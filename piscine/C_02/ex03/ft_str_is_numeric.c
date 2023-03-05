/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:41:47 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 22:50:41 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	char test0[] = "abcdef";
	char test1[] = "123124245";
	char test2[] = "abc123";
    char test3[] = "0123456789";

	printf("%d\n", ft_str_is_numeric(test0));
    printf("%d\n", ft_str_is_numeric(test1));
    printf("%d\n", ft_str_is_numeric(test2));
    printf("%d\n", ft_str_is_numeric(test3));


}*/
