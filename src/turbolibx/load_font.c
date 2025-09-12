/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_font.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:29:38 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 16:44:30 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"

char	*concat_font_path(char *path, char c)
{
	char	*ret;
	size_t	ct;

	ct = 0;
	ret = malloc(sizeof(char) * ft_strlen(path) + 50);
	if (ret == NULL)
		return (NULL);
	while (path[ct] != '\0')
	{
		ret[ct] = path[ct];
		++ct;
	}
	ret[ct] = '-';
	ret[++ct] = c;
	ret[++ct] = '.';
	ret[++ct] = 'x';
	ret[++ct] = 'p';
	ret[++ct] = 'm';
	ret[++ct] = '\0';
	return (ret);
}

t_font	*load_font(t_window *win, char *path)
{
	t_font	*ret;
	size_t	ct;
	char	*path_temp;

	ct = 0;
	ret = malloc(sizeof(t_font));
	if (ret == NULL)
		return (NULL);
	ret->font = malloc(sizeof(void *) * (126 - 32 + 1));
	while (ct < (126 - 32 + 1))
	{
		path_temp = concat_font_path(path, ct + 32);
		if (path_temp == NULL)
		{
			free(ret);
			return (NULL);
		}
		ret->font[ct] = load_image_free_path(win, path, 64, 64);
		++ct;
	}
	return (ret);
}
