/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:21 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (ft_strlen(src));
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	size_t n = 13;

	char dest1[] = "0.1.5.6.7.8.9.10.11.12";
	const char src1[] = "12.10.9.8.7.6.5.4.3.2.1.0";
	printf("normal : size = 33\ndest : %s src : %s\n", dest1, src1);

	int res1 = strlcpy(dest1, src1, n);
	printf("vrai = %d\n", res1);
	
	char dest[] = "0.1.5.6.7.8.9.10.11.12";
	const char src[] = "12.10.9.8.7.6.5.4.3.2.1.0";

	int res = ft_strlcpy(dest, src, n);
	printf("ma fonction = %d", res); 
}
*/
