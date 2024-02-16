/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:17:44 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/16 13:55:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst || !del || !lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
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

void    ft_dispContent(void *content)
{
        char    *s = malloc(sizeof(char) * 4);

        s[0] = 'd';
        s[1] = 'e';
        s[2] = 'f';
        s[3] = 0;
        content = s;
        printf("%s\n", (char *) content);
}

int     main()
{
        t_list  *e1;
        t_list  *e2;
        t_list  *e3;
        char  s[] = "abc";
        char  s1[] = "123";
        char  s2[] = "def";
        
        e1 = ft_lstnew(s);
        e2 = ft_lstnew(s1);
        e3 = ft_lstnew(s2);
        e1->next = e2;
        e2->next = e3;
        e3->next = NULL;
        ft_lstprint(e1);
        void (*pf)(void *);
        pf = &ft_dispContent;
        printf("\n");
        while (s[i])
        {
              ft_lstdelone(e1, pf);
i++;
        }
        ft_lstprint(e1);
}
*/
