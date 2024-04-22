/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:29:32 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/14 18:48:09 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	ne;

	p = 'P';
	ne = 'N';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &ne, 1);
	}
}
/*
int main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
