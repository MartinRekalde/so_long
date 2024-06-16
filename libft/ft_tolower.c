/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:17:08 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/06 13:13:16 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}	
	else
		return (c);
}
/*
int	main()
{
	int		i;
	char	a[] = "ABCDEFGHIJKLMNOPQRSTUVWYZ";
	char	b;
	i = 0;
	while(a[i])
	{
		b = ft_tolower(a[i]);
		write(1, &b, 1);
		i++;
	}
}
*/
