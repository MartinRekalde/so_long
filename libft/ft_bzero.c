/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:26:06 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 09:45:36 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*j;
	size_t			i;

	i = 0;
	j = (unsigned char *)s;
	while (i < n)
	{
		j[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Hello world";

	ft_bzero(str, 4);
	write(1, &str, sizeof(str)/sizeof(str[0]));
}*/
