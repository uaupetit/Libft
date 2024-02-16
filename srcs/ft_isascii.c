/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:59:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:56:55 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
                a = ft_isascii(av[1][1]);
                b = isascii(av[1][1]);
        }
        printf("good one %d\n", b);
        printf("my one %d", a);
}
*/
