#include "../include/modern_warfare_7.h"

size_t	count_words(char *str, char c)
{
	size_t	ret;
	size_t	ct;
	size_t	check;

	ct = 0;
	ret = 0;
	check = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] == c)
		{
			while (str[ct] == c)
				ct++;
			check = 0;
		}
		if (str[ct] != c && str[ct] != '\0')
		{
			if (check == 0)
				ret++;
			while (str[ct] != c && str[ct] != '\0')
				ct++;
			check = 1;
		}
	}
	return (ret);
}

size_t	ft_strlen(char *str)
{
	size_t	ret;

	ret = 0;
	while (str[ret] != '\0')
		++ret;
	return (ret);
}

size_t	filelen(int fd)
{
	size_t	ret;
	char	c;

	ret = 0;
	while (read(fd, &c, 1))
		++ret;
	close(fd);
	return (ret);
}

size_t	count_expand(int num)
{
	size_t	ret;

	ret = 1;
	while (num >= 10)
	{
		ret *= 10;
		num /= 10;
	}
	return (ret);
}
