/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:35:40 by mrekalde          #+#    #+#             */
/*   Updated: 2024/06/16 16:18:38 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char **fill_map(char **map, int h, char *argv)
{
	int i;
	int	fd;

	i = 0;
	fd = open(argv, O_RDONLY);
	while (h > i)
		map[i++] = get_next_line(fd);
	close (fd);
	return  (map);
}

char	**read_map (char *argv)
{
	int 	fd;
	int		h;
	int		w;
	char	*line;
	char	**map;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		printf("error\n");
	line = get_next_line(fd);
	w = ft_strlen(line);
	h = 0;
	while (line)
	{
		h++;
		free(line);
		line = get_next_line(fd);
	}
	map = (char **)malloc(sizeof (char *) * (h * w));
	map = fill_map(map, h, argv);
	return (close(fd), map);
}

void	print_matrix(char **game)
{
	int i = 0;
	int	j = 0;

	while (game[i])
	{
		while (game[i][j])
		{
			printf("%c", game[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}

char *initParams(char *argv)
{
	t_game game;

	game.map = read_map(argv);
	print_matrix(game.map);
	return (NULL);
}

int main(int argc, char **argv)
{
	char	*string;

	if (argc != 2)
		printf("error\n");
	string = ft_strrchr(argv[1], '.');
	if (!ft_strcmp(string, ".ber") == 0)
		printf("error\n");
	else
		initParams(argv[1]);
	return (0);
}
