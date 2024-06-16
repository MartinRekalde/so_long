/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:49:51 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/06 13:13:19 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}	
	else
		return (c);
}
/*
int	main()
{
	int		i;
	char	a[] = "abcdeffghijklmnopqrstuvwyz";
	char	b;
	i = 0;
	while(a[i])
	{
		b = ft_toupper(a[i]);
		write(1, &b, 1);
		i++;
	}
}
*/
