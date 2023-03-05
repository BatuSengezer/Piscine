/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:17:02 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 19:24:09 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[]= "Bye Bye";
	char	source[] = "Hello world";
	char 	dest_a[] = "Ciao";

	printf("%s\n", ft_strncpy(dest, source, 5));
	printf("%s\n", ft_strncpy(dest, source, 9));
    printf("%s\n", ft_strncpy(dest_a, source, 2));


	return (0);
}*/
