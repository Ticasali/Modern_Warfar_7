/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:02:30 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 10:08:02 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
#define PARSING_H
#include <stdbool.h>

typedef	struct	s_data
{
	unsigned char	*north;
	unsigned char	*south;
	unsigned char	*west;
	unsigned char	*east;
	unsigned char	*floor;
	unsigned char	*sky;
	char			**map;
}	t_data;

char	**check_file(char *pathname);

bool	check_parsing(char *pathname, t_data *data);
bool	check_arg(int ac, char **av);
bool	check_cub_extension(char *str);

#endif