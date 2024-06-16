/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:43:18 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/10 12:19:45 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del((lst)->content);
		free(lst);
		lst = NULL;
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

	lst = ft_lstnew(ft_strdup("Hello World!"));
	printf("List node content before deletion: %s\n", lst->content);
	ft_lstdelone(lst, del);
	printf("List node content after deletion: %s\n", lst->content);
	return (0);
}
 */