/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 09:22:01 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/05 00:16:49 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

void	*free_split(char **tab, char *str)
{
	size_t	ct;

	ct = 0;
	if (tab == NULL)
	{
		free(str);
		return (NULL);
	}
	while (tab[ct] != NULL)
	{
		free(tab[ct]);
		ct++;
	}
	free(tab);
	free(str);
	return (NULL);
}

char	**split(char *str)
{
	char	**ret;
	size_t	ct;
	size_t	ct_tab;

	ret = malloc(sizeof(char *) * (count_words(str, '\n') + 1));
	if (ret == NULL)
		return (free_tab(ret, str));
	ct = 0;
	ct_tab = 0;
	while (str[ct] != '\0')
	{
		while (str[ct] == '\n')
			ct++;
		if (str[ct] != '\0')
		{
			ret[ct_tab] = strdup_select(&str[ct], '\n');
			if (ret[++ct_tab - 1] == NULL)
				return (free_tab(ret, str));
		}
		while (str[ct] != '\n' && str[ct] != '\0')
			ct++;
	}
	ret[ct_tab] = NULL;
	free(str);
	return (ret);
}
