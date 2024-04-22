/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:41:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 17:48:06 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

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
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < (size - 1))
		{
			if (tab[i] > tab[j + 1])
				ft_swap(&tab[i], &tab[j + 1]);
			j++;
		}
		j = i++ + 1;
	}
}
/*
int	main(void)
{
	int	i = 0;
	int tab[] = {2,12,45,9,5,85648,4,2,3,4,5};

	ft_sort_int_tab(tab,11);
	while (tab[i])
	{
		printf("%d<",tab[i]);
		i++;
	}
	return 0;
}*/
