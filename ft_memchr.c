/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:28:26 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/19 01:05:05 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uns;
	int				i;

	uns = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (uns[i] == (unsigned char)c)
			return ((void *)&uns[i]);
		i++;
	}
	return (NULL);
}
