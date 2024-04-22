/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:04:59 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 14:50:42 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>
/*
        Pointeur : variable contenant l'adresse d'une autre variable
        %p -> affiche une adresse de variable ou pointeur

        [VARIABLES]
                maVariable  : valeur de la variable
                &maVariable : adresse de la variable

        [POINTEURS]
                monPointeur  : adresse de la variable pointée
                *monPointeur : valeur de la variable pointée
                &monPointeur : adresse du pointeur
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{	
	ft_putstr("hello_world");
	return 0;
}*/
