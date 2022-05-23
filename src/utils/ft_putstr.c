/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:23:10 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/10 18:12:23 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_putstr(char *s)
{
	int	counter;

	if (!s)
		return ;
	counter = 0;
	while (s[counter])
	{
		ft_putchar(s[counter]);
		counter++;
	}
}
