/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:42:08 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/11 15:58:16 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// Outputs Integers
void	ft_putnbr(int n)
{
	int	temp;

	temp = n;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	if (temp < 10)
		ft_putchar(temp + '0');
	else
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
}
