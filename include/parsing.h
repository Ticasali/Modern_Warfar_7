/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:02:30 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 20:47:54 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H
# include "modern_warfare_7.h"

t_data			*load_data(char **file, t_control *ctrl);

char			**check_file(char *pathname);
char			**get_map(char	**file);

unsigned char	*pars_line_for_color(char *line_to_pars);
unsigned char	*load_data_color(char **map, char to_find);

void			*load_data_sprite(char **map,
					char const *to_find, t_control *ctrl);
void			*pars_line_for_image(char *line_to_pars, t_window *win);

bool			check_parsing(char *pathname, t_control *data);
bool			check_arg(int ac, char **av);
bool			check_cub_extension(char *str);
bool			check_all_data(t_data *data);
bool			free_data_struct(t_data *data);

#endif