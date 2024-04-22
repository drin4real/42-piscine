/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:52:25 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 14:52:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
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
/*int	main(void)
{
	int	i;
	
	i = ft_strlen("hello_world");
	printf("longueur : %d", i);
	return 0;
}*/
