/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:03:00 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:57:54 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)str)[i++] = c;
	return (str);
}
/*
int main () 
{	
	int c = '.';
	int n = 7;
	char str[] = "la rentree c'est cool";

	int c1 = '.';
        int n1 = 7;
        char str1[] = "la rentree c'est cool";

	
	printf("%s\n", str);
	
	memset(str, c, n);
	printf("%s\n", str);
	
	ft_memset(str1, c1, n1);
	printf("%s\n", str1);

	return(0);
}
*/
