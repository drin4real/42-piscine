/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:12:48 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/05 11:49:54 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!(tab))
		return (-1);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	int *tab;
	int i;

	if (argc != 3)
		return (1);
	tab = NULL;
	i = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	if (!(tab))
		return (1);
	printf("%d", i);
	return (0);
}*/	
