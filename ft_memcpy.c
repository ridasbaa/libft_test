/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:50:40 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/30 02:37:21 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = (char *)dest;
	source = (const char *)src;
	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n && source[i])
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
