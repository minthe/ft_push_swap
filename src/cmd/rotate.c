/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:19:35 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/12 23:19:49 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_node **stack, char option)
{
	t_node	*temp;

	temp = *stack;
	if (!temp)
		return ;
	*stack = (*stack)->next;
	temp->next = NULL;
	lst_add_back(stack, temp);
	if (option == 'a')
		ft_putstr("ra\n");
	else if (option == 'b')
		ft_putstr("rb\n");
}

void	rotate_both(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a, 0);
	rotate(stack_b, 0);
	ft_putstr("rr\n");
}

void	reverse_rotate(t_node **stack, char option)
{
	t_node	*temp;
	t_node	*ref;

	ref = *stack;
	if (ref == NULL || ref->next == NULL)
		return ;
	while (ref->next->next != NULL)
	{
		ref = ref->next;
	}
	temp = ref->next;
	ref->next = NULL;
	lst_add_front(stack, temp);
	if (option == 'a')
		ft_putstr("rra\n");
	else if (option == 'b')
		ft_putstr("rrb\n");
}

void	rev_rot_both(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a, 0);
	reverse_rotate(stack_b, 0);
	ft_putstr("rrr\n");
}
