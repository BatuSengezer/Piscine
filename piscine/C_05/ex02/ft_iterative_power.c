/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:28:56 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/31 16:29:37 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(2, -1));
	printf("%d\n", ft_iterative_power(2, 0));
}*/
