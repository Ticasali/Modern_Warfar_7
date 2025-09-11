/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 05:19:27 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 22:14:34 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	putchar_stderr(char c)
{
	write(2, &c, 1);
}

int	print_error(char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		putchar_stderr(str[ct]);
		++ct;
	}
	return (-1);
}
