/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:54:12 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/27 15:06:38 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		petit;
	int		grand;
	int		res;
	float	m;

	m = 46340;
	petit = 0;
	grand = nb;
	res = 0;
	if (m * m == nb)
		return (m);
	while (petit <= grand && petit >= 0)
	{
		m = (petit + grand) / 2;
		if ((m * m) > nb)
			grand = m - 1;
		else if ((m * m) < nb)
		{
			petit = m + 1;
			res = m;
		}
		else
			return (m);
	}
	return (res);
}

int	ft_is_prime(int nb)
{
	int	sqrt_nb;
	int	i;

	i = 13;
	if (nb == 1 || nb % 2 == 0 || nb % 3 == 0
		|| nb % 5 == 0 || nb % 7 == 0 || nb % 11 == 0)
	{
		if (nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 11)
			return (1);
		return (0);
	}
	sqrt_nb = ft_sqrt(nb);
	while (i <= sqrt_nb)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_find_next_prime(2147483645));
	return 0;
}*/
