/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:17:29 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/28 13:30:49 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}
