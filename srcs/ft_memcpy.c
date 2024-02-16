/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:01:48 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	int c = 3;
	char dest[] = "12345";
	char src[] = "ABCDE";
	
	int c1 = 3;
        char dest1[] = "12345";
        char src1[] = "ABCDE";

	printf("dest = %s\n", dest);
        printf("src = %s\n", src);

	memcpy(dest, src, c);
	printf("vrai ft : %s\n", dest);
	
	ft_memcpy(dest1, src1, c1);
	printf("ma ft : %s", dest);
	
}
*/
