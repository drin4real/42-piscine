/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:17:42 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/22 11:21:47 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && j == 0)
				str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && j != 0)
				str[i] += 32;
			j++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j++;
		else
			j = 0;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main(void)
{
	char	str[] = "salut, cOMmENT tu VaS 
	?42mots qUARANTE-Deux;cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
