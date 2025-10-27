/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:11:45 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/27 01:29:14 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*uns1;
	const unsigned char	*uns2;
	size_t				i;

	i = 0;
	uns1 = (const unsigned char *)s1;
	uns2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && uns1[i] == uns2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(uns1[i] - uns2[i]));
}
