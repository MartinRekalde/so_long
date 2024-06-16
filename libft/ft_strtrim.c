/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:44:44 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/02 11:39:36 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr (set, s1[start]))
		start++;
	end = ft_strlen (s1);
	if (end)
		end--;
	while (s1[end] && ft_strchr (set, s1[end]))
		end--;
	len = end - start;
	return (ft_substr (s1, start, len + 1));
}
/*
int	main()
{
	char	*str = "Hello world";
	char	*tes = "Hel";
	char	*buffer;
//343
	buffer = ft_strtrim(str, tes);
	printf("BUFFER = %s\n", buffer);
}
*/
