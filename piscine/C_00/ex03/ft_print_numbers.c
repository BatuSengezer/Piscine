/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:47:34 by bsengeze          #+#    #+#             */
/*   Updated: 2022/10/15 23:46:49 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
