/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:52:07 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/03 12:56:58 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* 
void	funcion(unsigned int a, char *c)
{
	*c = a + *c;
}

int	main(void)
{
	char	s[] = "AAAA";

	printf("Original String: %s\n", s);
	ft_striteri(s, &funcion);

	printf("Mapped String: %s\n", s);
	return (0);
} */