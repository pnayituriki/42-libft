/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:09:09 by pnayitur          #+#    #+#             */
/*   Updated: 2022/06/23 12:10:54 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char	*str_num;
	size_t	digits;

	digits = ft_get_size(num);
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (0);
	str_num[digits] = '\0';
	if (num == 0)
		str_num[0] = '0';
	while (num != 0 && digits > 0)
	{
		if (num < 0)
		{
			num = num * -1;
			str_num[0] = '-';
		}
		str_num[digits - 1] = (num % 10) + '0';
		num = num / 10;
		digits--;
	}
	return (str_num);
}
