#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

double	get_time(void)
{
	char	*str_time;
	double	ret;
	int		fd;

	str_time = malloc(sizeof(char) * 11);
	if (str_time == NULL)
		return (-1);
	fd = open("/proc/uptime", O_RDONLY);
	if (fd <= 0)
	{
		free(str_time);
		return (-1);
	}
	read(fd, str_time, 10);
	ret = atod(str_time);
	if (close(fd) == -1)
		return (-1);
	free(str_time);
	return (ret);
}
