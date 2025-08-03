/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 05:19:27 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 05:28:31 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	ft_putchar_stderr(char c)
{
	write(2, &c, 1);
}

int		error(char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		ft_putchar_stderr(str[ct]);
		++ct;
	}
	return (-1);
}
