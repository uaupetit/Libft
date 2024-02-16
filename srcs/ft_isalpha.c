/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:57:59 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:40 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	int	a;
	int	b;
	if(ac == 2)
	{
		a = ft_isalpha(av[1][0]);
	 	b = isalpha(av[1][0]);
	}
	printf("good one %d\n", b);
	printf("my one %d", a);
}
*/
