/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:08:37 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 21:24:10 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_power(5,0));
	return (0);
}*/
