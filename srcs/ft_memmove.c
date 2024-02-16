/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:02:26 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:57:49 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n -1] = ((unsigned char *)src)[n - 1];
			n --;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	size_t c = 5;
	char dest[] = "ABCDEF";
	const char src[] = "12345";

	size_t c1 = 5;
        char dest1[] = "ABCDEF";
	const char src1[] = "12345";

	printf("dest = %s\n", dest);
        printf("src = %s\n", src);
		
	memmove(dest, src, c);
	printf("vrai fct : %s\n", dest);
		
	ft_memmove(dest1, src1, c1);
        printf("pas vrai fonction : %s\n", dest1);
}
*/
