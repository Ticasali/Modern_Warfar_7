/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:08:17 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 19:57:48 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H
# include <stdbool.h>
# include <unistd.h>

typedef struct trspy_s
{
	int		y;
	int		x;
	char	*addr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_trspy;

t_trspy			load_transparency(void *ptr, int x, int y);

char			**split(char *str);

char			*strdup_select(char *str, char c);

void			*free_split(char **tab, char *str);
void			*load_image(t_window *win, char *path, int x, int y);

size_t			get_pixel_img(t_trspy tr, int x, int y);
size_t			count_words(char *str, char c);
size_t			ft_strlen(char *str);
size_t			filelen(int fd);

double			atod(char *str);
double			get_time(void);

int				print_error(char *str);

unsigned char	atorgb(char *str);

bool			compare_extension(char *s1, char *s2);

void			put_pixel_img(t_trspy img, int x, int y, int color);
void			put_img_to_img(t_trspy dst, t_trspy src, int x, int y);
void			putchar_stderr(char c);

#endif