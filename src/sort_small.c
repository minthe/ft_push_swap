/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:51:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/15 15:51:18 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	efficient_rotate(t_node **stack_a)
{
	if ((get_min_pos(*stack_a)) < (lst_size(*stack_a) / 2))
		rotate(stack_a, 'a');
	else
		reverse_rotate(stack_a, 'a');
}

static void	sort_2_free(t_node **stack_a, t_node **stack_b)
{
	t_node	*ref_a;
	t_node	*ref_b;

	ref_a = *stack_a;
	ref_b = *stack_b;
	if (ref_a->value < ref_a->next->value)
		lst_free_all(&ref_a, &ref_b);
	else if (ref_a->value > ref_a->next->value)
	{
		swap(&ref_a, 'a');
		lst_free_all(&ref_a, &ref_b);
	}
}

static void	sort_4(t_node **stack_a, t_node **stack_b)
{
	while (stack_a)
	{
		if ((*stack_a)->rank == 0)
		{
			push(stack_a, stack_b, 'b');
			break ;
		}
		efficient_rotate(stack_a);
	}
	sort_3(stack_a, *stack_b);
	push(stack_b, stack_a, 'a');
}

static void	sort_5(t_node **stack_a, t_node **stack_b)
{
	while (stack_a)
	{
		if ((*stack_a)->rank == 0)
		{
			push(stack_a, stack_b, 'b');
			break ;
		}
		efficient_rotate(stack_a);
	}
	while (stack_a)
	{
		if ((*stack_a)->rank == 1)
		{
			push(stack_a, stack_b, 'b');
			break ;
		}
		efficient_rotate(stack_a);
	}
	sort_3(stack_a, *stack_b);
	while ((*stack_b) != NULL)
		push(stack_b, stack_a, 'a');
}

void	sort_small(t_node **stack_a, t_node **stack_b)
{
	if (lst_size(*stack_a) <= 1)
		lst_free_all(stack_a, stack_b);
	if (lst_size(*stack_a) == 2)
		sort_2_free(stack_a, stack_b);
	if (lst_size(*stack_a) == 3)
	{
		sort_3(stack_a, *stack_b);
		lst_free_all(stack_a, stack_b);
	}
	get_min_pos(*stack_a);
	if (lst_size(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	sort_5(stack_a, stack_b);
}
