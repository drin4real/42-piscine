/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:08:14 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/18 17:52:44 by dbislimi         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,505,6000};
	ft_rev_int_tab(tab,17);

        i = 0;
        while (tab[i])
        {
		printf("%d,", tab[i]);
                i++;
        }
	return 0;
}*/
