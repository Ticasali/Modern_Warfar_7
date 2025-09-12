/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_frame.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:55:22 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 17:05:21 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	reset_animation_frame(t_anim *anim)
{
	anim->frame_actual = 0;
}

void	increase_animation_frame(t_anim *anim)
{
	if (anim->frame_actual < anim->frame_max - 1)
		++anim->frame_actual;
	else
		anim->frame_actual = 0;
}
