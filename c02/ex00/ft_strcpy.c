/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:08:45 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/21 20:25:38 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include<stdio.h>
int	main(void)
{
	char dest[4]= "des";
	char src[] = "source";
	printf("dest avant : %s\n", dest);
	ft_strcpy(dest,src);
	printf("dest apres : %s\n", dest);
	return 0;
}*/
