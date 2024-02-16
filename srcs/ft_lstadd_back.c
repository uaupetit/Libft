/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:46:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*
void    ft_lstprint(t_list *liste)
{
        while (liste)
        {
                printf("%s\n", (char *) liste->content);
                liste = liste->next;
        }
	printf("\n");
}


int	main()
{
	t_list	*e1;
	t_list	*e2;
	t_list	*e3;
	t_list	*new;
	char	s[] = "abc";
	char	s1[] = "123";
	char	s2[] = "def";
	char	s3[] = "456";

	e1 = ft_lstnew(s);
	e2 = ft_lstnew(s1);
	e3 = ft_lstnew(s2);
	new = ft_lstnew(s3);
	e1->next = e2;
	e2->next = e3;
	e3->next = NULL;
	
	ft_lstprint(e1);
	ft_lstadd_back(&e1, new);
	ft_lstprint(e1);
}
*/
