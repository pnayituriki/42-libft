/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:03:32 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 13:31:50 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return ((char *)str);
	while (i < len && str[i++])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return ((char *)(str + i));
			j++;
		}
	}
	return (NULL);
}
