/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:28:26 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/27 00:53:41 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*uns;
	size_t				i;

	uns = (const unsigned char *)s;
	if (!uns)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (uns[i] == (unsigned char)c)
			return ((void *)&uns[i]);
		i++;
	}
	return (NULL);
}
