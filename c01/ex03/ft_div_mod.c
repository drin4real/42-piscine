/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:05:53 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 14:44:50 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a = 23;
	int b = 5;
	int x;
	int y;

	x = 456;
	y = 789;
	printf("AVANT x = %d et y = %d\n", x, y);
	ft_div_mod(a, b, &x, &y);
	printf("APRES x = %d et y = %d\n", x, y);
	return 0;
}*/
