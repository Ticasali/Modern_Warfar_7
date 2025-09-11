#include "../include/modern_warfare_7.h"

void	putchar_stderr(char c)
{
	write(2, &c, 1);
}

int	print_error(char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		putchar_stderr(str[ct]);
		++ct;
	}
	return (-1);
}
