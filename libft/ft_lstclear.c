/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:15:44 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/10 12:19:25 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
/* 
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_node;

	lst = NULL;
	new_node = ft_lstnew("Hello");
	ft_lstadd_front(&lst, new_node);
	new_node = ft_lstnew("World");
	ft_lstadd_front(&lst, new_node);
	printf("Antes:\n");
	while (lst)
	{
		printf("\t%s\n", (char *)lst->content);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	printf("Despues:\n");
	while (lst)
	{
		printf("\t%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
 */