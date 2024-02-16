/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:39:28 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:58:09 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

const char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*strdup1;
	size_t	size;	

	size = ft_strlen(s);
	strdup1 = malloc(size * sizeof(char) + 1);
	if (!strdup1)
		return (0);
	ft_strcpy(strdup1, s);
	return (strdup1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_strdup(av[1]));
}
*/
