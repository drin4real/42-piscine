/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:45:40 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/27 15:00:48 by dbislimi         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	for (int i = 0; i < 100 ; i++) if (ft_is_prime(i)) printf("%d\n", i);
	return 0;
}*/
