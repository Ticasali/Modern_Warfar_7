/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:32:43 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 10:32:56 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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