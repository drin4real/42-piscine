/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:19:28 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/02 20:12:27 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!(tab))
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	i = 0;
	if (argc != 3)
		return (1);
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (!tab)
		return (0);
	while(tab[i])
		printf("%d\n", tab[i++]);
	return (0);
}*/
