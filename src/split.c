/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 09:22:01 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 09:38:56 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	*free_tab(char **tab)
{
	size_t	ct;

	ct = 0;
	if (tab == NULL)
		return (NULL);
	while (tab[ct] != NULL)
	{
		free(tab[ct]);
		ct++;
	}
	free(tab);
	return (NULL);
}

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

char	**split(char *str)
{
	char	**ret;
	size_t	ct;
	size_t	ct_tab;

	ret = malloc(sizeof(char *) * (count_words(str, '\n') + 1));
	if (ret == NULL)
		return (NULL);
	ct = 0;
	ct_tab = 0;
	while (str[ct] != '\0')
	{
		while (str[ct] == '\n')
			ct++;
		if (str[ct] != '\0')
		{
			ret[ct_tab] = strdup_select(&str[ct], '\n');
			if (ret[ct_tab] == NULL)
				return (free_tab(ret));
			ct_tab++;
		}
		while (str[ct] != '\n' && str[ct] != '\0')
			ct++;
	}
	ret[ct_tab] = NULL;
	free(str);
	return (ret);
}
