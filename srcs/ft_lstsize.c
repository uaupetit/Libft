/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:09:13 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main()
{
	t_list	*e1;
	t_list	*e2;
	t_list	*e3;
	char	s[] = "abc";
	char	s1[] = "123";
	char	s2[] = "def";

	e1 = ft_lstnew(s);
	e2 = ft_lstnew(s1);
	e3 = ft_lstnew(s2);
	e1->next = NULL;
	e2->next = e3;
	e3->next = NULL;

	printf("%d", ft_lstsize(e1));
}
*/
