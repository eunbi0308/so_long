#include "mlx_linux/mlx.h"
#include "so_long.h"

int	key_hook(int keycode, t_data *vars)
{
	printf("%d\n", keycode);
	if(keycode == KEY_ESC)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	return (0);
}

int	close_window(t_data *win)
{
	mlx_destroy_window(win->mlx, win->win);
	exit(1);
	return (0);
}

int exit_hook()
{
	exit(0);
}

void	up(t_data *move)
{
	move->map[move->player_y][move->player_x] = '0';
	move->map[move->player_y - 1][move->player_x] = 'P';
	move->player_mov++;
	mapping(move);
}

void	down(t_data *move)
{
	move->map[move->player_y][move->player_x] = '0';
	move->map[move->player_y + 1][move->player_x] = 'P';
	move->player_mov++;
	mapping(move);
}

void	left(t_data *move)
{
	move->map[move->player_y][move->player_x] = '0';
	move->map[move->player_y][move->player_x - 1] = 'P';
	move->player_mov++;
	mapping(move);
}

void	right(t_data *move)
{
	move->map[move->player_y][move->player_x] = '0';
	move->map[move->player_y][move->player_x + 1] = 'P';
	move->player_mov++;
	mapping(move);
}

int	finish(int keyhook, t_data *move)
{
	if (move->collect == 0
		&& ((keyhook == 2 && move->map[move->player_y][move->player_x + 1] == 'E')
		|| (keyhook == 1 && move->map[move->player_y + 1][move->player_x] == 'E')
		|| (keyhook == 0 && move->map[move->player_y][move->player_x - 1] == 'E')
		|| (keyhook == 13 && move->map[move->player_y - 1][move->player_x] == 'E')))
	{
		ft_printf("FINISH\n Good Job Minie!");
		mlx_key_hook(move->win, key_hook, &move);
	}
	return (0);
}

