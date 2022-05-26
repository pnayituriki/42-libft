/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:43:41 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 12:26:50 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	un = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un *= -1;
	}
	if (un > 9)
		ft_putnbr_fd(un / 10, fd);
	ft_putchar_fd((un % 10) + '0', fd);
}
