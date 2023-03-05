/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:17:35 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 23:31:47 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char test0[] = "";
	char test1[] = "ABCasdsdf";
	char test2[] = "abc123";
    char test3[] = "ABC";

	printf("%d\n", ft_str_is_printable(test0));
    printf("%d\n", ft_str_is_printable(test1));
    printf("%d\n", ft_str_is_printable(test2));
    printf("%d\n", ft_str_is_printable(test3));

}*/
