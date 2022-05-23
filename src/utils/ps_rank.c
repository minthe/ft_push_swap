/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rank.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:24:51 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/16 13:48:22 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	sorting(t_node *stack, int *index)
{
	t_node	*ref;
	int		min;

	min = 2147483647;
	ref = stack;
	while (ref != NULL)
	{
		if (ref->value < min && ref->rank == -1)
			min = ref->value;
		ref = ref->next;
	}
	ref = stack;
	while (ref != NULL)
	{
		if (ref->value == min && ref->rank == -1)
		{
			ref->rank = (*index);
			(*index)++;
		}
		ref = ref->next;
	}
}

void	lst_rank(t_node *stack)
{
	int		count;
	int		index;

	count = 0;
	index = 0;
	while (count < lst_size(stack))
	{
		sorting(stack, &index);
		count++;
	}
}
