/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:35:48 by mrekalde          #+#    #+#             */
/*   Updated: 2024/06/16 20:04:44 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_char(char **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (map[y])
	{
		while (map[y][x])
		{
			printf("Checking character at position (%d, %d): %c\n", y, x, map[y][x]); // Debugging line
			if (!(ft_strchr("01CEP", map[y][x])))
				return (printf("Error, only 01CEP characters accepted.\n"), 0);
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}

int	is_rectangle(char **map)
{
	int	lenght;
	int	i;

	lenght = ft_strlen(map[0]);
	i = 1;
	while (map[i])
	{
		printf("Checking if %i rectangle\n", i); // Debugging line
		if ((int)ft_strlen(map[i]) != lenght)
			return (printf("The map %i is NOT a rectangle\n", i), 0);
		else
			i++;
	}
	return (1);
}
