/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:08:17 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/06 10:18:21 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H
# include "modern_warfare_7.h"

char			**split(char *str);

char			*strdup_select(char *str, char c);

void			*free_tab(char **tab, char *str);

size_t			count_words(char *str, char c);
size_t			ft_strlen(char *str);
size_t			filelen(int fd);

double			atod(char *str);
double			get_time(void);

int				print_error(char *str);

unsigned char	atorgb(char *str);

bool			compare_extension(char *s1, char *s2);

void			putchar_stderr(char c);

#endif