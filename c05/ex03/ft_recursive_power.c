/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:24:30 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/07 15:10:01 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_power(2711,-1976));
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(3927,0));
	printf("%d\n",ft_recursive_power(-2872,1));
	return 0;
}
