/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:47 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 10:05:31 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc(sizeof(char), (ft_strlen(s1) + 1));
	if (!s)
		return (0);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[ft_strlen(s1)] = 0;
	return (s);
}
/*
int main()
{
	char a[] = "pepaso";
    char *p=ft_strdup(a);
    printf("%s\n",p);
	printf("%s\n",strdup(a));
}
*/
