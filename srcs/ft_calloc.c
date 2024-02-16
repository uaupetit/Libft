/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:00:19 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t eCount, size_t eSize)
{
	void	*calloc;

	if (eSize && (eSize * eCount) / eSize != eCount)
		return (NULL);
	calloc = malloc(eCount * eSize);
	if (!calloc)
		return (NULL);
	ft_bzero(calloc, eSize * eCount);
	return (calloc);
}

/*
int	main()
{
	size_t	st1 = 0;
	size_t	st2 = 0;
	char    *s = ft_calloc(st1, st2);

	printf("%s\n", s);
}
*/
