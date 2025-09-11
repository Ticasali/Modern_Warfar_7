#include "../include/modern_warfare_7.h"

int	mouse_input_solo(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 400 && x <= 700) && (y >= 300 && y <= 400))
			ctrl->solo->statement = 1;
//		if ((x >= 400 && x <= 700) && (y >= 50 && y <= 600))
//		.0
//	ctrl->solo->statement = 2;
		if ((x >= 400 && x <= 700) && (y >= 700 && y <= 800))
			ctrl->solo->statement = 3;
	}
	return (0);
}
