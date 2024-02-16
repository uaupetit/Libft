/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:15:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s2;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (ft_check(set, s1[start]) == 1 && start <= end)
		start++;
	while (ft_check(set, s1[end]) == 1 && end >= start)
		end--;
	s2 = malloc(sizeof(char) * ((end - start) + 1) + 1);
	if (!s2)
		return (NULL);
	while (start <= end)
	{
		s2[i] = s1[start];
		start++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char const	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char const	set[] = " ";
		
		printf("%s", ft_strtrim(s1, set));
}
*/
