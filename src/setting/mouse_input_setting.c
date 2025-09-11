#include "../include/modern_warfare_7.h"

int	mouse_input_setting(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 500 && x <= 600) && (y >= 150 && y <= 200))
			ctrl->setting->statement = 1;
		if ((x >= 500 && x <= 600) && (y >= 250 && y <= 300))
			ctrl->setting->statement = 2;
		if ((x >= 500 && x <= 600) && (y >= 350 && y <= 400))
			ctrl->setting->statement = 3;
	}
	return (0);
}
