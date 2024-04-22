/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:33:22 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/20 17:44:09 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 123 && str[i] > 96)
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int     main(void)
{
        char s[] = "abdlwj";
        printf("%d",ft_str_is_lowercase(s));
        return(0);
}*/
