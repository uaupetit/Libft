/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:50:42 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
void    ft_lstprint(t_list *liste)
{
        while (liste)
        {
                printf("%s\n", (char *) liste->content);
                liste = liste->next;
        }
}


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
	e1->next = e2;
	e2->next = e3;
	e3->next = NULL;
	
	ft_lstprint(e1);
	printf("\n");
//	ft_lstlast(e1);
	printf("%s", (char *) ft_lstlast(e1)->content);
}
*/
