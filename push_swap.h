/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:35:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/15 17:09:46 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
	int				rank;
}	t_node;

// utils
void	ft_putchar(char c);
int		ft_isdigit(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
int		ps_check_nbr(const char *str);
void	error(void);

// core
t_node	*node_create(int value);
t_node	*create_stack(int argc, char *argv[]);
void	lst_add_back(t_node **node, t_node *new);
void	lst_add_front(t_node **stack, t_node *new);
void	lst_free(t_node **stack);
void	lst_free_all(t_node **stack_a, t_node **stack_b);
int		lst_size(t_node *stack);
int		get_min_pos(t_node *stack_a);
void	lst_rank(t_node *stack);
void	swap(t_node **stack, char option);
void	push(t_node **stack_from, t_node **stack_to, char option);
void	sswap(t_node **stack_a, t_node **stack_b);
void	rotate(t_node **stack, char option);
void	rotate_both(t_node **stack_a, t_node **stack_b);
void	reverse_rotate(t_node **stack, char option);
void	rev_rot_both(t_node **stack_a, t_node **stack_b);
void	is_sorted(t_node **stack_a, t_node **stack_b);
void	sort_small(t_node **stack_a, t_node **stack_b);
void	sort_big(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **stack_a, t_node *stack_b);

#endif