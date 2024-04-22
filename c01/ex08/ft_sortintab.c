/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortintab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:51:47 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/29 19:10:20 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while(k < size - 1)
	{
		while (i < size - 1 - k)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		k++;
	}
}
#include <stdio.h>
int	main(void)
{
	int	tab[8] = {999, 555 ,24 ,3 , 758, 8425, 25, 1};
	int i = 0;
	ft_sort_int_tab(tab, 8);
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
