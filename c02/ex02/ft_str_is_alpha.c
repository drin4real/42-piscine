/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:44:42 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/22 11:16:17 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 91 && str[i] > 64)
			|| (str[i] < 123 && str[i] > 96))
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int	main(void)
{
	char s[] = "er5";
	printf("%d",ft_str_is_alpha(s));
	return(0);
}*/
