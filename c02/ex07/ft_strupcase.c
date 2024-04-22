/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:54:09 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/20 09:38:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*#include<stdio.h>
int	main(void)
{
	int	i;
	char str[] = "J'ai pas de chats";
	ft_strupcase(str);
	printf("%s", str);
	return 0;
}*/
