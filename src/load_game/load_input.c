/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:47:37 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/11 12:56:52 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"


t_input	*load_input(t_window *win)
{
	t_input	*input;

	input = malloc(sizeof(t_input));
	if (input == NULL)
		return (NULL);
	input->dash = 0;
	input->down = 0;
	input->front = 0;
	input->hide = 0;
	input->item1 = 0;
	input->item2 = 0;
	input->item3 = 0;
	input->item4 = 0;
	input->jump = 0;
	input->left = 0;
	input->loading = 0;
	input->right = 0;
	input->shoot = 0;
	return (input);
}
