/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:21:22 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/28 20:30:23 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr_base(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		
