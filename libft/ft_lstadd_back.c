/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:20:54 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/05 12:42:03 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && new)
	{
		temp = *lst;
		if (!temp)
			*lst = new;
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
	}
}
/* 
int	main()
{
	t_list	*list = ft_lstnew("Hello");
	t_list	*new = ft_lstnew("World");

	ft_lstadd_back(&list, new);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return (0);
}
 */