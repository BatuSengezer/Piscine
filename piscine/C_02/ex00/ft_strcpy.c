/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:22:38 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/23 18:53:43 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char	str_src[7] = "Hellooo";
	char	str_dest[8] = "Byeee!!!";

	ft_strcpy(str_dest, str_src);
	printf("%s\n", str_dest);
	return (0);
}*/
