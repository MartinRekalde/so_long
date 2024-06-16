/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:55:10 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/02 12:38:02 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ha;
	char	*ne;
	size_t	i;
	size_t	n;

	ha = (char *) haystack;
	ne = (char *) needle;
	i = 0;
	if (!ne[i])
		return (ha);
	while (i < len && ha[i])
	{
		n = ft_strncmp(&ha[i], ne, ft_strlen(ne));
		if (n == 0 && (i + ft_strlen(ne) <= len))
			return (&ha[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*h = "lorem ipsum dolor sit amet";
	char	*n = "dolor";
	size_t	l = 15;

	printf("%s\n", strnstr(h, n, l));
	printf("%s\n", ft_strnstr(h, n, l));
}
*/
