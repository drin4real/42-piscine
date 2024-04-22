/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:33:08 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/07 13:48:48 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] && !s2[i])
		return (1);
	if (!s1[i] && s2[i])
		return (-1);	
	if (!s1[i] && !s2[i])
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include<string.h>
#include<stdio.h>
int	main(void)
{
	char	s1[] = "egrjio";
	char	s2[] = "";
	printf("%d\n", strcmp(s1,s2));
	printf("%d", ft_strcmp(s1,s2));
	return 0;
}
