/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:43:13 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/16 12:20:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks Input Parameters for dup. or if its sorted
static void	validate(int argc, char *argv[])
{
	int	index;
	int	count;

	index = 1;
	count = 1;
	if (argc < 2)
		exit (EXIT_FAILURE);
	while (argv[index])
	{
		while (count < argc - 1)
		{
			count++;
			if (ps_check_nbr(argv[index]) == ps_check_nbr(argv[count]))
				error();
		}
		index++;
		count = index;
	}
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	validate(argc, argv);
	stack_a = create_stack(argc, argv);
	stack_b = NULL;
	lst_rank(stack_a);
	is_sorted(&stack_a, &stack_b);
	if (argc < 7)
		sort_small(&stack_a, &stack_b);
	else
		sort_big(&stack_a, &stack_b);
	lst_free_all(&stack_a, &stack_b);
	return (0);
}

/*
	t_node	*print_a;
	t_node	*print_b;

	Testing Printing the numbers from stack_a
	ft_putstr("Stack A \n");
	print_a = stack_a;
	while (print_a != NULL)
	{
		ft_putnbr(print_a->value);
		print_a = print_a->next;
		write(1, "\n", 1);
	}
	Testing Printing the numbers from stack_b
	ft_putstr("Stack B \n");
	print_b = stack_b;
	while (print_b != NULL)
	{
		ft_putnbr(print_b->value);
		print_b = print_b->next;
		write(1, "\n", 1);
	}
*/
