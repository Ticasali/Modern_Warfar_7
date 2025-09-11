#include "../include/modern_warfare_7.h"

void	*load_image(t_window *win, char *path, int x, int y)
{
	void	*ret;

	ret = mlx_xpm_file_to_image(win->ml, path, &x, &y);
	return (ret);
}

void	*load_image_free_path(t_window *win, char *path, int x, int y)
{
	void	*ret;

	ret = mlx_xpm_file_to_image(win->ml, path, &x, &y);
	free(path);
	return (ret);
}

char	*get_texture_name(char *path)
{
	size_t	ct;

	ct = 0;
	while (path[ct] != '\0')
		++ct;
	while (path[ct] != '\\')
		--ct;
	return (&path[ct + 1]);
}

t_img_loader	img_loader(t_window *win, int x, int y, char *path)
{
	t_img_loader	ret;

	ret.x = x;
	ret.y = y;
	ret.sprite = load_image(win, path, x, y);
	ret.name = get_texture_name(path);
	return (ret);
}
