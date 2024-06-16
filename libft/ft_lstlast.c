/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:30:05 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/05 12:06:31 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp->next != NULL)
		{
			temp = temp->next ;
		}
		return (temp);
	}
	return (NULL);
}
/* 
int	main()
{
	t_list	*list = ft_lstnew("hello");
	t_list	*list2 = ft_lstnew("world");
	t_list	*list3 = ft_lstnew("programed");
	t_list	*list4 = ft_lstnew("to");
	t_list	*list5 = ft_lstnew("exist");

	list->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = list5;
	list5->next = NULL;
	printf("size: %s\n", ft_lstlast(list)->content);
	return (0);
} */
