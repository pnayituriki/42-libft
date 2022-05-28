/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:12:48 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/28 12:44:59 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	last;
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || (len == 0))
		return (ft_calloc(1, sizeof(char)));
	last = 0;
	while (last < len && s[(size_t)start + last] != '\0')
		last++;
	ptr = (char *)malloc(sizeof(*ptr) * (last + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (last)
	{
		ptr[i] = s[start];
		i++;
		start++;
		last--;
	}
	ptr[i] = '\0';
	return (ptr);
}
