/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:37:21 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 17:19:09 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_max;

	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen(dest);
	len_max = ft_strlen(src) + len_dest;
	if (n < len_dest)
		return (ft_strlen(src) + n);
	while (src[i] && len_dest + i < n - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_max);
}

/*
int     main()
{
        char    dest[] = "";
       	const char    src[] = "eee";
        
        char    dest1[] = "";
        const char    src1[] = "eee";
        
        size_t  n = 0;
	size_t n1 = 0;
        
        printf("original : dest = %s, src = %s\n", dest, src);
        
        int res = ft_strlcat(dest, src, n);
        printf("ma fonction : dest = %s, res = %d\n", dest, res);

        int res1 = strlcat(dest1, src1, n1);
        printf("vrai fonction : dest = %s, res = %d", dest1, res1);
}
*/
