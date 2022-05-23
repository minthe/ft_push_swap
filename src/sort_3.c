/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:02:25 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/14 21:03:51 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_node **stack_a, t_node *stack_b)
{
	int	max;

	max = lst_size(*stack_a) + lst_size(stack_b) - 1;
	if ((*stack_a)->rank == max)
		rotate(stack_a, 'a');
	else if ((*stack_a)->next->rank == max)
		reverse_rotate(stack_a, 'a');
	if ((*stack_a)->rank > (*stack_a)->next->rank)
		swap(stack_a, 'a');
}
