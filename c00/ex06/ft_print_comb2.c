/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:35:57 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/06 16:57:56 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_custom(int nb)
{
	if (nb > 9)
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	j = 0;
	while (j < 99)
	{
		i = j + 1;
		while (i < 100)
		{
			ft_putnbr_custom(j);
			ft_putchar(' ');
			ft_putnbr_custom(i);
			if (j == 98 && i == 99)
			{
				ft_putchar('\n');
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
			i++;
		}
		j++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
