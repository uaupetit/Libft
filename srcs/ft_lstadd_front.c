/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:18:59 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	temp = *lst;
	*lst = new;
	new->next = temp;
}

/*
void	ft_lstprint(t_list *liste)
{
	while (liste)
	{
		printf("%s\n", (char *) liste->content);
		liste = liste->next;
	}
}

int	main()
{
//	t_list	**lst; adresse du pointeur vers premier element de la liste
//	t_list	*new;  adresse du pointeur vers element a rajouter dans la liste	
	
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
	printf("\n");	
	ft_lstadd_front(&e1, new);
	
	ft_lstprint(e1);
}
*/
