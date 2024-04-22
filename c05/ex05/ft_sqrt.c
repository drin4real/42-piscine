/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:27:03 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/27 15:23:37 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		petit;
	int		grand;
	float	m;

	m = 46340;
	petit = 0;
	grand = nb;
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
		}
		else
			return (m);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("racine de -36 : %d\n",ft_sqrt(-36));
	printf("racine de 2147483647 : %d\n",ft_sqrt(2147483647));
	printf("racine de 2147395600 : %d\n",ft_sqrt(2147395600));
	printf("racine de 6 : %d\n",ft_sqrt(6));
	printf("racine de 1 : %d\n",ft_sqrt(1));
	printf("racine de 2 : %d\n",ft_sqrt(2));
	printf("racine de 100 : %d\n",ft_sqrt(100));
	printf("racine de 0 : %d\n",ft_sqrt(0));
	printf("racine de 16 : %d\n",ft_sqrt(16));
	printf("racine de 81 : %d\n",ft_sqrt(81));
	printf("racine de 1762992144 : %d\n",ft_sqrt(1762992144));
	printf("racine de  1990141321: %d\n",ft_sqrt(1990141321));
	printf("racine de  269912041: %d\n",ft_sqrt(269912041));
	printf("racine de 7650756: %d\n",ft_sqrt(7650756));
	printf("racine de  7868025: %d\n",ft_sqrt(7868025));
	return (0);
}
