/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modern_warfare_7.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:08:09 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 15:10:07 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODERN_WARFARE_7_H
#define MODERN_WARFARE_7_H

# include "../mlx_linux/mlx.h"
# include "../mlx_linux/mlx_int.h"
# include "parsing.h"
# include "utils.h"
# include "render.h"
# include "player.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_control
{
	t_window	*win;
	t_data		*data;
	t_player	*player;
}	t_control;

#endif