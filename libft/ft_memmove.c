/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:37:20 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/24 12:57:03 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*_src;
	char	*_dest;

	_src = (char *)src;
	_dest = (char *)dest;
	while (n--)
		_dest[n] = _src[n];
	return (dest);
}
