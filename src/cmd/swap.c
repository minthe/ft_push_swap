/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:57:22 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/14 17:51:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// Swaps first two elements of stack_a
void	swap(t_node **stack, char option)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = *stack;
	if (first == NULL)
		return ;
	second = first->next;
	if (second == NULL)
		return ;
	third = second->next;
	second->next = first;
	first->next = third;
	*stack = second;
	if (option == 'a')
		ft_putstr("sa\n");
	else if (option == 'b')
		ft_putstr("sb\n");
}

void	sswap(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a, 0);
	swap(stack_b, 0);
	ft_putstr("ss\n");
}
