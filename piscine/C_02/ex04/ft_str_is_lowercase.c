/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:58:47 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 23:11:11 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char test1[] = "ABCasdsdf";
	char test2[] = "abc123";
    char test3[] = "ABC";

	printf("%d\n", ft_str_is_lowercase(test0));
    printf("%d\n", ft_str_is_lowercase(test1));
    printf("%d\n", ft_str_is_lowercase(test2));
    printf("%d\n", ft_str_is_lowercase(test3));


}*/
