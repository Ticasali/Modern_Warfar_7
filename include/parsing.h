/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:02:30 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 19:54:02 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
#define PARSING_H
# include <stdbool.h>

typedef	struct	s_data
{
	void			*north;
	void 			*south;
	void			*west;
	void			*east;
	unsigned char	*floor;
	unsigned char	*sky;
	char			**map;
}	t_data;

t_data			*load_data(char **file, t_control *ctrl);

char			**check_file(char *pathname);

unsigned char	*pars_line_for_color(char *line_to_pars);

void			*load_data_sprite(char **map, char const *to_find, t_control *ctrl);
void			*load_data_color(char **map, char to_find);
void			*pars_line_for_image(char *line_to_pars, t_window *win);

bool			check_parsing(char *pathname, t_data *data);
bool			check_arg(int ac, char **av);
bool			check_cub_extension(char *str);
bool			check_all_data(t_data *data);
bool			free_data_struct(t_data *data);

#endif