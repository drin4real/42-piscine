/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:08:26 by dbislimi          #+#    #+#             */
/*   Updated: 2024/03/06 13:32:29 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	ft_count_joined_size(char **strs, char *sep, int size)
{
	int	joined_len;
	int	sep_len;
	int	i;

	i = 0;
	joined_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		joined_len += ft_strlen(strs[i]);
		if (i != size - 1)
			joined_len += sep_len;
		i++;
	}
	return (joined_len);
}

char	*ft_fill(char *joined, char *str, char *sep, int j)
{
	if (j % 2 == 0)
		joined = ft_strcat(joined, str);
	else
		joined = ft_strcat(joined, sep);
	return (joined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		joined_len;
	int		j;
	int		i;

	i = 0;
	j = 0;
	joined_len = 0;
	if (size == 0)
	{
		joined = malloc(sizeof(char));
		joined[0] = '\0';
		return (joined);
	}
	joined_len = ft_count_joined_size(strs, sep, size);
	joined = malloc(sizeof(char) * (joined_len + 1));
	joined[0] = '\0';
	while (i < size)
	{
		joined = ft_fill(joined, strs[i], sep, j);
		if (j % 2 == 0)
			i++;
		j++;
	}
	return (joined);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str[6] = {"bonjour", "merci", "aurevoir", "skrt", "okay", "okayokay"};
	printf("%s", ft_strjoin(6, str, "._."));
}*/
