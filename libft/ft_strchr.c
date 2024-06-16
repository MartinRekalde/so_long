/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:07:44 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 10:04:33 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	char 	str[] = "esto es super increible";
	char	a = 'i';
	char	*b;
	int		i;

	b = ft_strchr(str, a);
	i = 0;
	if (b != NULL)
	{
		while(b[i] != '\0')
		{
			write(1, &b[i], 1);
			i++;
		}
	}
	else
		write(1, "NULL", 4);
}
*/
