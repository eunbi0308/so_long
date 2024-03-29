/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put_image.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 10:49:25 by eucho         #+#    #+#                 */
/*   Updated: 2023/02/22 20:31:20 by eunbi         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"

void	put_walls(t_data *img)
{
	img->file = mlx_xpm_file_to_image(img->mlx, "images/bush_pixel.xpm",
			&img->pixel, &img->pixel);
	mlx_put_image_to_window (img->mlx, img->win, img->file,
		(img->pixel * img->x), (img->pixel * img->y));
}

void	put_player(t_data *img)
{
	img->file = mlx_xpm_file_to_image(img->mlx, img->player_dir,
			&img->pixel, &img->pixel);
	img->player_x = img->x;
	img->player_y = img->y;
	mlx_put_image_to_window (img->mlx, img->win, img->file,
		(img->pixel * img->x), (img->pixel * img->y));
}

void	put_collect(t_data *img)
{
	img->file = mlx_xpm_file_to_image(img->mlx, "images/seed_pixel.xpm",
			&img->pixel, &img->pixel);
	mlx_put_image_to_window (img->mlx, img->win, img->file,
		(img->pixel * img->x), (img->pixel * img->y));
}

void	put_exit(t_data *img)
{
	if (img->collect == 0)
		img->file = mlx_xpm_file_to_image(img->mlx, "images/exit_open.xpm",
				&img->pixel, &img->pixel);
	else
		img->file = mlx_xpm_file_to_image(img->mlx, "images/exit_close.xpm",
				&img->pixel, &img->pixel);
	mlx_put_image_to_window (img->mlx, img->win, img->file,
		(img->pixel * img->x), (img->pixel * img->y));
}
