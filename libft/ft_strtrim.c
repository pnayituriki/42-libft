/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:28:16 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/28 13:18:40 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*remove_sapaces(char const *s1)
{
	int		n;
	int		i;
	char	*ptr;

	n = 0;
	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s1));
	while (s1[n] != '\0')
	{
		if (s1[n] != ' ' && s1[n] != '\n' && s1[n] != 't')
			ptr[i++] = s1[n];
		n++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	get_start_index(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	get_last_index(char const *s1, char const *set)
{
	size_t	last;

	last = ft_strlen(s1);
	while (last && ft_strchr(set, s1[last]))
		last--;
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	char	*new_s1;

	new_s1 = remove_sapaces(s1);
	if (!new_s1 || !set)
		return (NULL);
	start = get_start_index(new_s1, set);
	last = get_last_index(new_s1, set);
	return (ft_substr(new_s1, start, last - start + 1));
}
