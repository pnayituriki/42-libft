/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+   +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:42:52 by pnayitur          #+#    #+#             */
/*   Updated: 2022/04/28 16:35:33 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*_src;
	char	*_dest;

	_src = (char *)src;
	_dest = (char *)dest;
	while (n--)
		*_dest++ = *_src++;
	return (dest);
}
