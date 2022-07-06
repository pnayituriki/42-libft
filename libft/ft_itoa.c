/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:09:09 by pnayitur          #+#    #+#             */
/*   Updated: 2022/07/06 11:55:01 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zero_case(int n)
{
	char	*str;

	str = malloc(2);
	if (!str)
		return (NULL);
	str[n] = 48;
	str[1] = '\0';
	return (str);
}

static int	ft_alen(int n, int j)
{
	while (n != 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

static char	*ft_logic(char *str, int m, int j, int i)
{
	if (m == -2147483648)
	{
		m = -214748364;
		str[j] = (8 + 48);
		j--;
	}
	if (m > -2147483648 && m < 0)
		m = i * m;
	while (m != 0 && j >= 0)
	{
		str[j] = ((char)((m % 10)) + 48);
		m = m / 10;
		j--;
	}
	if (i < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		m;

	i = 0;
	j = 0;
	m = n;
	if (n == 0)
		return (ft_zero_case(n));
	j = ft_alen(n, j);
	if (m < 0)
	{
		j++;
		i = -1;
	}
	str = malloc(1 * (j + 1));
	if (!str)
		return (NULL);
	str[j] = '\0';
	j--;
	str = ft_logic(str, m, j, i);
	return (str);
}
