/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <dkolida@student.42warsaw.pl>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:53:10 by maabdela          #+#    #+#             */
/*   Updated: 2024/10/02 01:54:27 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cub3d.h"

void	debug_print_char_tab(char **tab)
{
	int	i;

	printf("\n");
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
}

void	debug_display_mapinfo(t_data *data)
{
	printf(YELLOW "\n---- MAP\n" RESET);
	printf("Map height: %d\n", data->map_info.height);
	printf("Map width: %d\n", data->map_info.width);
	debug_print_char_tab(data->map);
	printf(YELLOW "\n---- TEXTURES & COLORS\n" RESET);
	printf("Color ceiling: #%lx\n", data->texinfo.hex_ceiling);
	printf("Color floor: #%lx\n", data->texinfo.hex_floor);
	printf("Texture north: %s\n", data->texinfo.north);
	printf("Texture south: %s\n", data->texinfo.south);
	printf("Texture east: %s\n", data->texinfo.east);
	printf("Texture west: %s\n", data->texinfo.west);
}

void	debug_display_player(t_data *data)
{
	printf(YELLOW "\n---- PLAYER\n" RESET);
	printf("Player pos: ");
	printf("x = %f, y = %f\n", data->player.pos_x, data->player.pos_y);
	printf("Player direction: %c ", data->player.dir);
	printf("(x = %f, y = %f)\n", data->player.dir_x, data->player.dir_y);
}

void	debug_display_data(t_data *data)
{
	debug_display_mapinfo(data);
	debug_display_player(data);
	printf("\n");
}
