/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrattep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:34:01 by agrattep          #+#    #+#             */
/*   Updated: 2024/04/22 09:57:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_boucle_x(int x, char preums, char milieu, char dernier)
{
	int	longueur_de_ligne;

	longueur_de_ligne = 1;
	while (longueur_de_ligne <= x)
	{
		if (longueur_de_ligne == 1)
			ft_putchar(preums);
		else if (longueur_de_ligne == x)
			ft_putchar(dernier);
		else
			ft_putchar(milieu);
		longueur_de_ligne++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	nombre_de_ligne;

	nombre_de_ligne = 1;
	if (x > 0 && y > 0)
	{
		while (nombre_de_ligne <= y)
		{
			if (nombre_de_ligne == 1)
			{
				ft_boucle_x(x, 'A', 'B', 'C');
			}
			else if (nombre_de_ligne == y)
			{
				ft_boucle_x(x, 'A', 'B', 'C');
			}
			else
				ft_boucle_x(x, 'B', ' ', 'B');
			nombre_de_ligne++;
		}
	}
}
