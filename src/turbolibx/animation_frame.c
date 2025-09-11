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
