/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:35:53 by mrekalde          #+#    #+#             */
/*   Updated: 2024/06/16 20:03:14 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// Externo
# include <fcntl.h>//open, O_RDONLY
# include <unistd.h>//read, close, write
# include <stdlib.h>//malloc
# include <stdio.h>//printf

// Interno
# include "mlx/mlx.h"
# include "gnl/get_next_line.h"
# include "libft/libft.h"

typedef struct s_game
{
    char **map;
} t_game;

int	valid_char(char **map);
int is_rectangle(char **map);

#endif