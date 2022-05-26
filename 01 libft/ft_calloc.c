/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnayitur <pnayitur@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:32:15 by pnayitur          #+#    #+#             */
/*   Updated: 2022/05/26 14:38:29 by pnayitur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}
