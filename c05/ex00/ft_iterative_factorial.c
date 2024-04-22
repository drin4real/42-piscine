/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:53:54 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/25 10:15:57 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb = nb - 1;
	}
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_factorial(13));
	return (0);
}*/
