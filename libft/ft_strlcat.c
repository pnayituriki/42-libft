/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:40:12 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 13:27:38 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (!n || dst_len >= n)
		return (n + src_len);
	if (src_len < n - dst_len)
		ft_memcpy(dest + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dst_len, src, n - dst_len - 1);
		dest[n - 1] = '\0';
	}
	return (dst_len + src_len);
}
