/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:43:51 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/21 20:07:47 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille;

	i = 0;
	taille = ft_strlen(src);
	while (src[i] != '\0' && i < (size - 1) && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (taille);
}
/*
#include<stdio.h>
int	main(void)
{
	char	dest[4];
	char	src[] = "Source";
	printf("%d", ft_strlcpy(dest,src,4));
	return 0;
}*/
