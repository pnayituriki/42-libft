/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:12:57 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/28 17:00:48 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (words);
}

static size_t	ft_counts_len_word(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static void	ft_free_memory(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t words;
	char **array;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words((char *)s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		array[i] = ft_substr(s, 0, ft_counts_len_word(s, c));
		if (!array[i++])
		{
			ft_free_memory(array);
			return (NULL);
		}
		s += ft_counts_len_word(s, c);
	}
	array[i] = NULL;
	return (array);
}