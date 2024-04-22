/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:56:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/23 11:05:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ftswap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ftswap(&tab[i],&tab[size - i - 1]);
		i++;
	}
}
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9,10,11};
	int i = 0;
	ft_rev_int_tab(tab,11);
	while (tab[i])
	{	
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
