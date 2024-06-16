/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:10:42 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/10 12:24:23 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}	
	}
}
/* 
void	print_list(void *content)
{
	printf("%s\n", (char *)content);
}

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
	ft_lstiter(list, print_list);
}
 */