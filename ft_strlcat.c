/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:06:03 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/16 19:06:15 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dest[destlen] && destlen < size)
		destlen++;
	if (destlen == size)
		return (srclen + size);
	while (src[i] && (destlen + i) < size -1)
		dest[destlen + i] = src[i++];
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}
