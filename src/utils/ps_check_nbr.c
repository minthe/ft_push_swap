/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:23:52 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/04/16 12:17:57 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// Validates String (Int & digit) returns Int
int	ps_check_nbr(const char *str)
{
	int		sign;
	long	ret;

	ret = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
		if ((*str == ' ') || (*str == '\0'))
			error();
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			error();
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	ret = ret * sign;
	if (ret > 2147483647 || ret < -2147483648)
		error();
	return (ret);
}
