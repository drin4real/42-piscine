/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:28:45 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/22 11:39:07 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}
/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	char s1[] = "sadsahaaaa";
	char s2[] = "sazsahaaaaz";
	printf("%d\n", strncmp(s1,s2,2));
	printf("%d", ft_strncmp(s1,s2,2));
	return 0;
}*/
