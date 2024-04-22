/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:08:50 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 14:24:48 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < nb)
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	char dest[17] = "destination";
	char src[] = "source";
	int	nb =  5;
	printf("%s",ft_strncat(dest,src,nb));
	return 0;
}*/
