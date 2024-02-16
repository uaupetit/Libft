/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:01:19 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:57:08 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
                a = ft_isprint(av[1][0]);
                b = isprint(av[1][0]);
        }
        printf("good one %d\n", b);
        printf("my one %d", a);
}
*/
