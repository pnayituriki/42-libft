/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:28:16 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/28 16:31:11 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_the_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (start < (int)ft_strlen((char *)s1))
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

static int	calc_the_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen((char *)s1) - 1;
	while (end > 0)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!set)
		return (NULL);
	if (!s1)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	end = calc_the_end(s1, set);
	start = calc_the_start(s1, set);
	if (start > end)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res = malloc((end - start + 1 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (char *)&s1[start], end - start + 1 + 1);
	return (res);
}
