/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:22:45 by dbislimi          #+#    #+#             */
/*   Updated: 2024/02/24 19:36:28 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str[i] && !to_find[i])
		return ("");
	while (str[i])
	{
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (str + i);
		j = 0;
		i++;
	}
	return (NULL);
}
/*#include<string.h>
int	main(void)
{

	printf("%s\n",    strstr("   test   salut   toto  ", "salut"));
	printf("%s\n", ft_strstr("   test   salut   toto  ", "salut"));
	printf("%s\n",    strstr("   test   salut   toto  ", ""));
	printf("%s\n", ft_strstr("   test   salut   toto  ", ""));
	printf("%s\n",    strstr("", "salut"));
	printf("%s\n", ft_strstr("", "salut"));
	printf("%s\n",    strstr("", ""));
	printf("%s\n", ft_strstr("", ""));
	printf("%s\n",    strstr("   test   salu   toto  ", "salut"));
	printf("%s\n", ft_strstr("   test   salu   toto  ", "salut"));
	printf("%s\n",    strstr("   test   saslut   toto  salut", "salut"));
	printf("%s\n", ft_strstr("   test   saslut   toto  salut", "salut"));
	return 0;
}*/
