/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_min_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:25:33 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/15 15:39:14 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	get_min_pos(t_node *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->rank == 0)
			return (i);
		i++;
		stack_a = stack_a->next;
	}
	return (0);
}
