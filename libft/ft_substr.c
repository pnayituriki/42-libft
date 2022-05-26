/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:12:48 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 13:33:10 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	last;
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if ((ptr) == NULL)
		return (NULL);
	last = start + len;
	if (len <= 0 || last > ft_strlen(s))
	{
		ptr[0] = '\0';
		return (ptr);
	}
	i = 0;
	while (start < last)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	return (ptr);
}
