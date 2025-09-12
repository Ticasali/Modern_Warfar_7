/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 07:15:58 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 19:42:50 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

char	*strdup_select(char *str, char c)
{
	size_t	ct;
	char	*ret;

	ct = 0;
	while (str[ct] != '\0' && str[ct] != c)
		++ct;
	ret = malloc(sizeof(char) * ct + 1);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (str[ct] != '\0' && str[ct] != c)
	{
		ret[ct] = str[ct];
		++ct;
	}
	ret[ct] = '\0';
	return (ret);
}


char	*ft_strdup(char *str)
{
	size_t	ct;
	char	*ret;

	ct = 0;
	while (str[ct] != '\0')
		++ct;
	ret = malloc(sizeof(char) * ct + 1);
	if (ret == NULL)
		return (NULL);
	ct = 0;
	while (str[ct] != '\0')
	{
		ret[ct] = str[ct];
		++ct;
	}
	ret[ct] = '\0';
	return (ret);
}
