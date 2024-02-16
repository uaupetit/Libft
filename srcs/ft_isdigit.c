/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:00:44 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:57:03 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int     main(int ac, char **av)
{
        int     a;
        int     b;
        if(ac == 2)
        {
                a = ft_isdigit(av[1][0]);
                b = isdigit(av[1][0]);
        }
        printf("good one %d\n", b);
        printf("my one %d", a);
}
*/
