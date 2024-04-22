/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:39:46 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/20 17:44:27 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 91 && str[i] > 64)
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int     main(void)
{
        char s[] = "RUGYUE/B";
        printf("%d",ft_str_is_uppercase(s));
        return(0);
}*/
