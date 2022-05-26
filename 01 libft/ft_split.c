/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:12:57 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 21:39:24 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (s == 0 || s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	arr = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!arr || !s)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
		{
			arr[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	arr[j] = 0;
	return (arr);
}
