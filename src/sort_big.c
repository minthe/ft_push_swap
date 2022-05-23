/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:06:49 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/15 14:44:51 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big(t_node **stack_a, t_node **stack_b)
{
	int	count;
	int	i;
	int	x;

	count = lst_size(*stack_a) + lst_size(*stack_b);
	x = 0;
	i = 0;
	while (count)
	{
		while (x < (lst_size(*stack_a) + lst_size(*stack_b)))
		{
			if ((((*stack_a)->rank >> i) & 1) == 0)
				push(stack_a, stack_b, 'b');
			else
				rotate(stack_a, 'a');
			x++;
		}
		while (*stack_b)
			push(stack_b, stack_a, 'a');
		i++;
		x = 0;
		count /= 2;
	}
}
