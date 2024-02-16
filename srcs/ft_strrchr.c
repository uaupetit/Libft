/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:06:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		return ((char *)s);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
int	main()
{
//	int	c = 'o';
//	const char	s[] = "bonjur";

	int     c1 = 'o';
        const char      s1[] = "bonjur";

//	char	*res = strrchr(s, c);
	char	*res1 = ft_strrchr(s1, c1);

//	printf("res = %s \n", res);
	printf("ft_res = %s", res1);
}
*/
