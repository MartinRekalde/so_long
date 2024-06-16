/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:54:54 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/03 15:05:41 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*str = "Martin";
	char	c = 'r';
	int		n = ft_strlen(str);
	void	*buffer;

	buffer = memchr(str, c, n);
	printf("Original: %s\n", buffer);
	buffer = ft_memchr(str, c, n);
	printf("ft_casa: %s\n", buffer);
}
*/
