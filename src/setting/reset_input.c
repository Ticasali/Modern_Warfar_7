/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:23:42 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/13 14:24:00 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	reset_input(t_input *input)
{
	input->dash = -2;
	input->down = 115;
	input->front = 119;
	input->item1 = 49;
	input->item2 = 50;
	input->item3 = 51;
	input->item4 = 52;
	input->jump = 32;
	input->left = 97;
	input->loading = 114;
	input->right = 100;
	input->shoot = -1;
}
