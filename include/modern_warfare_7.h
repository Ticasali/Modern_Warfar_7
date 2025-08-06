/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modern_warfare_7.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:08:09 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/06 15:10:10 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODERN_WARFARE_7_H
#define MODERN_WARFARE_7_H

# include "../mlx_linux/mlx.h"
# include "../mlx_linux/mlx_int.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>

typedef struct trspy_s
{
	int		y;
	int		x;
	char	*addr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_trspy;


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

typedef struct	s_player
{
	double	pos_x;
	double	pos_y;
	double	delta_x;
	double	delta_y;
	double	angle;
	bool	m_front;
	bool	m_back;
	bool	m_left;
	bool	m_right;
	bool	t_right;
	bool	t_left;
}	t_player;


typedef struct	s_window
{
	void	*ml;
	void	*win;
}	t_window;

typedef struct	s_control
{
	t_window	*win;
	t_data		*data;
	t_player	*player;
}	t_control;

#endif