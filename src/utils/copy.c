#include "../include/modern_warfare_7.h"

char	*strdup_select(char *str, char c)
{
	size_t	ct;
	char	*ret;

	ct = 0;
	while (str[ct] != '\0' && str[ct] != c)
		ct++;
	ret = malloc(sizeof(char) * ct + 1);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (str[ct] != '\0' && str[ct] != c)
	{
		ret[ct] = str[ct];
		ct++;
	}
	ret[ct] = '\0';
	return (ret);
}
