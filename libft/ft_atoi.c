/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:32:23 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 12:54:14 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnum(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	if (*nptr == '\0')
		return (0);
	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (ft_isnum(nptr[i]) == 0)
			return (num * sign);
		num = num * 10 + nptr[i] - '0';
		i++;
	}
	return (num * sign);
}
