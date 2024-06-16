/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:47:13 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/10 15:41:01 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* 
void	del(void *content)
{
	free(content);
}

void	*convert_to_uppercase(void *content)
{
	char	*str;
	char	*result;
	size_t	i;

	str = (char *)content;
	result = malloc(strlen(str) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = ft_toupper(str[i]);
		i++;
	}
	result[strlen(str)] = '\0';

	return (result);
}

int	main()
{
	t_list	*list;
	t_list	*result;

	list = ft_lstnew("hello");
	list->next = ft_lstnew("world");
	result = ft_lstmap(list, convert_to_uppercase, del);
	while (result)
	{
		printf("%s\n", result->content);
		result = result->next;
	}
	return (0);
}
 */