/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:18:00 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/30 18:27:47 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/
