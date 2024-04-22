/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:42:25 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/21 20:39:09 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= 126 && str[i] >= 32))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int	main(void)
{
	char s[] = "abCdE wjK";
	printf("%d",ft_str_is_printable(s));
	return(0);
}*/
