/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddnew_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:56:30 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/04 16:49:54 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*new;

	list = ft_lstnew("Hello");
	new = ft_lstnew("World");
	ft_lstadd_front(&list, new);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
}
*/
