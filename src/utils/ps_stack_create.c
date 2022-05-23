/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:09:58 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/15 13:23:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*node_create(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->prev = NULL;
	node->next = NULL;
	node->rank = -1;
	return (node);
}

// create a new stack and adds element as list
t_node	*create_stack(int argc, char *argv[])
{
	size_t	index;
	t_node	*node;
	t_node	*new;

	(void)argc;
	index = 1;
	node = NULL;
	while (argv[index])
	{
		new = node_create(ps_check_nbr(argv[index]));
		lst_add_back(&node, new);
		index++;
	}
	return (node);
}
