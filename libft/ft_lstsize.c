/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:02:11 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/05 12:33:22 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/* 
int	main()
{
	char	*str = "hello";
	t_list	*list = ft_lstnew(str);
	t_list	*list2 = ft_lstnew(str);
	t_list	*list3 = ft_lstnew(str);
	t_list	*list4 = ft_lstnew(str);

	list->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;
	printf("size: %d\n", ft_lstsize(list));
	return (0);
}
 */