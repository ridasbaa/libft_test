/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:33:53 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/27 01:26:08 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*undest;
	const unsigned char	*unsrc;
	size_t				i;

	i = 0;
	undest = (unsigned char *)dest;
	unsrc = (const unsigned char *)src;
	if (!undest || !unsrc)
		return (dest);
	if (n == 0 || undest == unsrc)
		return (dest);
	if (undest < unsrc)
	{
		while (i < n)
			undest[i] = unsrc[i++];
	}
	else
	{
		undest += n;
		unsrc += n;
		while (n-- > 0)
			*(--undest) = *(--unsrc);
	}
	return (dest);
}
