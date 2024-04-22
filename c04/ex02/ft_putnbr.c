/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:52:41 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 19:46:23 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
/*
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", INT_MIN);
	ft_putnbr(-2147483648);
	return (0);
}*/
