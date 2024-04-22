/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:38:08 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/23 10:31:05 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <stdio.h>
int main(void)
{
	int	a = 58;
	int	*ptr1 = &a;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("a =%d", a);
	return 0;
}
