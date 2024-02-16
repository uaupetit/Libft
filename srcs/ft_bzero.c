/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:55:18 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:56 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *str, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (i < n)
		((unsigned char *)str)[i++] = c;
	return (str);
}

/*
int main (int ac, char **av) 
{	
	int n = 7;
	
	if (ac == 2)
	{
		printf("%s\n", av[1]);
	
		bzero(av[1], n);
        	printf("%s\n", av[1]);

		ft_bzero(av[1], n);
		printf("%s\n", av[1]);
	}
	return(0);
}
*/
