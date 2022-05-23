/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:02:33 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/14 13:56:44 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	lst_free_all(t_node **stack_a, t_node **stack_b)
{
	lst_free(stack_a);
	lst_free(stack_b);
	exit (0);
}

void	lst_free(t_node **stack)
{
	t_node	*temp;
	t_node	*ref;

	ref = *stack;
	temp = ref;
	if (ref == NULL)
		return ;
	while (ref != NULL)
	{
		free(temp);
		ref = ref->next;
		temp = ref;
	}
}
