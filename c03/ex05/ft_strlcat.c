/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:39:53 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 14:07:23 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille_de_dest;
	unsigned int	taille_totale;
	unsigned int	taille_de_src;

	i = 0;
	taille_de_dest = ft_strlen(dest);
	taille_de_src = ft_strlen(src);
	taille_totale = taille_de_dest + taille_de_src;
	if (size != 0 && taille_de_dest != 0)
	{
		while (dest[i] && i < (size - 1))
			dest[taille_de_dest++] = src[i++];
		dest[taille_de_dest] = '\0';
	}
	return (taille_totale);
}
/*#include <stdio.h>
int	main(void)
{
	char dest[1] = "";
	char *src = "+source";
	printf("%d\n", ft_strlcat(dest,src,5));
	printf("%s\n", dest);
	return (0);
}*/
