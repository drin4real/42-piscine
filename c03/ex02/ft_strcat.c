/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:25:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/21 09:44:34 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char	dest[17] = "destination";
	char	src[] = "source";

	printf("%s", ft_strcat(dest,src));
	return 0;
}*/
