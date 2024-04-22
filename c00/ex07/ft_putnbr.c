/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:09:21 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/29 17:04:02 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
		ft_putchar(nb + '0');
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(atoi(argv[1]));
	return 0;
}*/
