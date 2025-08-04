/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:08:17 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 19:01:07 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H
# include <stdbool.h>
# include <unistd.h>

typedef struct Trspy_s
{
	int		y;
	int		x;
	char	*addr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_Trspy;

char	**split(char *str);

char	*strdup_select(char *str, char c);

void	*free_split(char **tab, char *str);

size_t	count_words(char *str, char c);
size_t	ft_strlen(char *str);
size_t	filelen(int fd);

int		print_error(char *str);

bool	compare_extension(char *s1, char *s2);

void	putchar_stderr(char c);

#endif