/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 06:04:36 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 06:06:37 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

size_t	ft_strlen(char *str)
{
	size_t	ret;

	ret = 0;
	while (str[ret] != '\0')
		++ret;
	return (ret);
}