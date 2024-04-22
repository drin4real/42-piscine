/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:56 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/20 09:39:35 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include<stdio.h>
int	main(void)
{
	int	i;
	char str[] = "J'AI PAS DE CHATS";
	ft_strlowcase(str);
	printf("%s", str);
	return 0;
}*/
