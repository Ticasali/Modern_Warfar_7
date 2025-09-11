#include "../include/modern_warfare_7.h"

double	atod(char *str)
{
	double	ret;
	size_t	ct;

	ct = 0;
	ret = 0;
	while (str[ct] > 47 && str[ct] < 58)
	{
		ret += str[ct] - 48;
		if ((str[++ct] > 47 && str[ct] < 58))
			ret *= 10;
	}
	ret += (double)(str[++ct] - 48) / 10;
	ret += (double)(str[++ct] - 48) / 100;
	return (ret);
}

unsigned char	atorgb(char *str)
{
	unsigned char	ret;
	size_t			check;
	size_t			ct;

	ret = 0;
	ct = 0;
	while ((str[ct] > 47 && str[ct] < 58) && ct < 3)
	{
		ret += str[ct] - 48;
		if ((str[++ct] > 47 && str[ct] < 58))
			ret *= 10;
	//DONT FORGET TO SET ERNNO FOR ERROR CASE IN PARSING
	}
	return (ret);
}
