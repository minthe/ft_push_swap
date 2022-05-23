/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:26:46 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/12 22:42:51 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// Push from one stack to the other
// 'a' push from b to a and vice versa
void	push(t_node **stack_from, t_node **stack_to, char option)
{
	t_node	*temp;

	temp = *stack_from;
	if (!temp)
		return ;
	*stack_from = (*stack_from)->next;
	temp->next = *stack_to;
	*stack_to = temp;
	if (option == 'b')
		ft_putstr("pb\n");
	else if (option == 'a')
		ft_putstr("pa\n");
}
