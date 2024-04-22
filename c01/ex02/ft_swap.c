/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:54:07 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 14:43:37 by dbislimi         ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int a = 15;
	int b = 28;

	printf("AVANT : A = %d et B = %d\n", a, b);
	ft_swap(&a, &b);
	printf("APRES : A = %d et B = %d\n", a, b);
	return 0;
}*/
