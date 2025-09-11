#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

bool	compare_extension(char *s1, char *s2)
{
	size_t	ct;

	ct = 0;
	if (ft_strlen(s1) != 4)
		return (false);
	while (s1[ct] != '\0')
	{
		if (s1[ct] != s2[ct])
			return (false);
		++ct;
	}
	return (true);
}
