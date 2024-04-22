/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:22:36 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/26 20:26:16 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

char	**bubble_sort(int size, char **to_sort)
{
	char	**sorted;
	char	*temp;
	int		i;
	int		k;

	sorted = to_sort;
	i = 0;
	k = 0;
	temp = "";
	while (k < size - 1)
	{
		while (i < size - k - 1)
		{
			if (ft_strcmp(sorted[i], sorted[i + 1]) > 0)
			{
				temp = sorted[i];
				sorted[i] = sorted[i + 1];
				sorted[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		k++;
	}
	return (sorted);
}

int	main(int argc, char **argv)
{
	char	**sorted;
	int		i;

	i = 0;
	sorted = bubble_sort((argc - 1), (argv + 1));
	while (sorted[i])
	{
		ft_putstr(sorted[i++]);
	}
	return (0);
}
