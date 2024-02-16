/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:58:25 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
int     main(int ac, char **av)
{
        int     a;
        int     b;
        if(ac == 2)
        {
                a = ft_strlen(av[1]);
                b = strlen(av[1]);
        }
        printf("good one %d\n", b);
        printf("my one %d", a);
}*/
