/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:33:08 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/14 14:05:10 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	is_sorted(t_node **stack_a, t_node **stack_b)
{
	t_node	*ref;

	ref = *stack_a;
	while (ref->next != NULL)
	{
		if (ref->rank > ref->next->rank)
			return ;
		ref = ref->next;
	}
	lst_free(stack_a);
	lst_free(stack_b);
	exit (0);
}
