/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:28:09 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 14:49:01 by dbislimi         ###   ########.fr       */
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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int main(void)
{
	int a = 57;
	int b = 10;

	printf("AVANT : a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("APRES : a = %d, b = %d\n", a, b);
	return 0;
}*/
