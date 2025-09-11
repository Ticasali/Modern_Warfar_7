
#include "../include/modern_warfare_7.h"
#include "../include/parsing.h"
#include "../include/utils.h"

bool	check_arg(int ac, char **av)
{
	if (ac != 2)
		return (false);
	if (check_cub_extension(av[1]) == false)
		return (false);
	return (true);
}

bool	check_cub_extension(char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] == '.')
			if (compare_extension(&str[ct], ".cub") == true)
				return (true);
		++ct;
	}
	return (false);
}
