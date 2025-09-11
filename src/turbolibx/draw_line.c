#include "../include/modern_warfare_7.h"

void	mlx_draw_line(t_window *window, double x_start, double x_end,
		double y_start, double y_end)
{
	int		pixel;
	double	delta_x;
	double	delta_y;

	delta_x = x_end - x_start;
	delta_y = y_end - y_start;
	pixel = sqrt((delta_x * delta_x) + (delta_y * delta_y));
	while (pixel >= 0)
	{
		mlx_pixel_put(window->ml, window->win, x_start, y_start, 0xFFFFFF);
		x_start += delta_x;
		y_start += delta_y;
		pixel--;
	}
}
