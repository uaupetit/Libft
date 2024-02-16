/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:22:48 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
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
	t_list	*element1;
	t_list	*element2;
	t_list	*element3;
	char	s[] = "abcdef";
	char	s1[] = "12345";
	char	s2[] = "345def";

	element1 = ft_lstnew(s);
	element2 = ft_lstnew(s1);
	element3 = ft_lstnew(s2);
	element1->next = element2;
	element2->next = element3;

	ft_lstprint(element1);
}


typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;	



	//content = donnee dans maillon void * pour stocker un type
	//next = adresse du maillon suivant ou null si fin de liste

*/
