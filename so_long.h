/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:35:53 by mrekalde          #+#    #+#             */
/*   Updated: 2024/06/16 16:11:21 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include "mlx/mlx.h"
# include "gnl/get_next_line.h"
# include "map_reader.c"
# include "validation.c"
# include "libft/libft.h"

typedef struct s_game
{
	char **map;
}t_game;


#endif