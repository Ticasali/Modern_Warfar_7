/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_animation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:21:14 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/07 12:05:24 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"



void	**load_animation(t_window *win, t_anim anim)
{
	void	**ret;
	char	*path;
	size_t	ct;

	ct = 0;
	ret = malloc(sizeof(void *) * anim.frame);
	if (ret == NULL)
		return (NULL);
	while (ct < anim.frame)
	{
		path = concat_animation_path(path, ct);
		if (path == NULL)
		{
			free(ret);
			return (NULL);
		}
		ret[ct] = load_image_free_path(win, path, anim.x, anim.y);
		++ct;
	}
	return (ret);
}
