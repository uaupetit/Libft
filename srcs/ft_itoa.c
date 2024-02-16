/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:24:54 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_nbchar(int n)
{
	int	nbchar;

	nbchar = 1;
	if (n < 0)
	{
		nbchar++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		nbchar++;
	}
	return (nbchar);
}

char	*ft_fillin(char	*s, int nbchar, int nb)
{
	s[nbchar] = '\0';
	while (nbchar - 1 >= 0)
	{
		s[nbchar - 1] = (nb % 10) + 48;
		nb /= 10;
		nbchar--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		nbchar;
	char	*s;
	long	nb;

	nb = n;
	nbchar = ft_nbchar(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(sizeof(char) * nbchar + 1);
	if (!s)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	s = ft_fillin(s, nbchar, nb);
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*
int	main()
{
	int	n;
	
	n = -214;
	printf("%s", ft_itoa(n));
}
*/
