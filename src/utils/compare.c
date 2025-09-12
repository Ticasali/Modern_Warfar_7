/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 06:04:14 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 16:22:14 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

bool	ft_strcmp(char *s1, char *s2)
{
	size_t	ct;

	ct = 0;
	while (s1[ct] || s2[ct])
	{
		if (s1[ct] != s2[ct])
			return (false);
		++ct;
	}
	if (s1[ct] != s2[ct])
		return (false);
	return (true);
}
