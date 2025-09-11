#include "../include/modern_warfare_7.h"
#include "../include/utils.h"
#include "../include/parsing.h"
#include "../include/load_game.h"
#include "../include/game.h"
#include "../include/home.h"

int	main(int ac, char **av)
{
	t_control	*ctrl;

	if (check_arg(ac, av) == false)
		return (print_error("Error\n Bad Arguments\n"));
	ctrl = malloc(sizeof(t_control));
	if (ctrl == NULL)
		return (-1);
	ctrl->win = load_window();
	if (ctrl->win == NULL)
		return (-1);//Turbo Free
	if (check_parsing(av[1], ctrl) == false)
		return (print_error("Error\n Bad Data\n"));
	if (load_structure(ctrl) == false)
		return (print_error("Error\n Bad Data\n"));
	home_loop(ctrl);
}
