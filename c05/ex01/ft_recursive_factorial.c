/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:03:35 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 21:08:15 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(-5));
	return 0;
}*/
