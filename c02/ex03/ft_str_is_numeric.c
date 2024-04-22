/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:05:16 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/20 17:43:57 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 58 && str[i] > 47)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char str[] = "425862";
	printf("%d",ft_str_is_numeric(str));
	return 0;
}*/
