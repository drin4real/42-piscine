/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:19:46 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/25 11:26:27 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 0)
		return (index);
	else if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("avec 12 : %d\n", ft_fibonacci(12));
        printf("avec -12 : %d\n",ft_fibonacci(-12));
        printf("avec 0 : %d\n",  ft_fibonacci(0));
        printf("avec 1 : %d\n",  ft_fibonacci(1));
        printf("avec 2 : %d\n",  ft_fibonacci(2));
        printf("avec 3 : %d\n",  ft_fibonacci(3));
        printf("avec 4 : %d\n",  ft_fibonacci(4));
        printf("avec 5 : %d\n",  ft_fibonacci(5));
        printf("avec 6 : %d\n",  ft_fibonacci(6));
        printf("avec 7 : %d\n",  ft_fibonacci(7));
        printf("avec 8 : %d\n",  ft_fibonacci(8));
        printf("avec 9 : %d\n",  ft_fibonacci(9));
        printf("avec 10 : %d\n", ft_fibonacci(10));
        printf("avec 11 : %d\n", ft_fibonacci(11));
        return 0;
}*/
