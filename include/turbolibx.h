/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turbolibx.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:34:53 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 16:48:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURBOLIBX_H
# define TURBOLIBX_H
# include "modern_warfare_7.h"

t_font			*load_font(t_window *win, char *path);

t_anim			*load_animation_struct(t_window *win,
					t_anim_loader loader, int x, int y);

t_trspy			load_transparency(void *ptr, int x, int y);

t_img_loader	img_loader(t_window *win, int x, int y, char *path);

t_anim_loader	anim_loader(int x, int y, int frame, char *path);

void			**load_animation(t_window *win, t_anim_loader anim);

void			*load_image(t_window *win, char *path, int x, int y);
void			*load_image_free_path(t_window *win, char *path, int x, int y);

char			*concat_font_path(char *path, char c);
char			*concat_animation_path(char *path, size_t num);
char			*get_texture_name(char *path);

size_t			get_pixel_img(t_trspy tr, int x, int y);

int				mlx_reset(t_xvar *xvar);
int				mlx_putkey_code_img(int keycode, t_control *ctrl, int x, int y);
int				mlx_putkey_code(int keycode, t_control *ctrl);

void			mlx_draw_line(t_window *window, double x_start, double x_end,
					double y_start, double y_end);
void			put_pixel_img(t_trspy img, int x, int y, int color);
void			put_img_to_img(t_trspy dst, t_trspy src, int x, int y);
void			reset_animation_frame(t_anim *anim);
void			increase_animation_frame(t_anim *anim);
void			mlx_putnbr(t_control *ctrl, int num, int x, int y);
void			mlx_putstr(t_control *ctrl, char *str, int x, int y);

#endif
