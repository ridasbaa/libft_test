/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:33:53 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/19 00:10:13 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*undest;
	const unsigned char	*unsrc;
	size_t				i;

	i = 0;
	undest = (unsigned char *)dest;
	unsrc = (const unsigned char *)src;
	if (n == 0 || undest == unsrc)
		return (undest);
	if (undest < unsrc)
	{
		while (i < n)
		{
			undest[i] = unsrc[i];
			i++;
		}
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
