/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:55:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/13 12:39:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	lst_add_front(t_node **stack, t_node *new)
{
	if (stack != NULL && new != NULL)
	{
		new->next = *stack;
		*stack = new;
	}
}
