/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_data.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:03:41 by eucho         #+#    #+#                 */
/*   Updated: 2023/02/22 15:02:41 by eunbi         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_linux/mlx.h"
#include "so_long.h"
#include <fcntl.h>
/*Safe intializing*/
void	set_data(t_data *var)
{
	var->map_size = 0;
	var->map_height = 0;
	var->map_width = 0;
	var->pixel = 0;
	var->x = 0;
	var->y = 0;
	var->player = 0;
	var->player_x = 0;
	var->player_y = 0;
	var->player_dir = "images/Minie_pixel_R.xpm";
	var->collect = 0;
	var->exit = 0;
	var->count_move = 0;
}
