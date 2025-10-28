/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:16:02 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/27 22:56:08 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*area;

	area = malloc(nmemb * size);
	if (!area)
		return (NULL);
	area = ft_memset(area, 0, nmemb * size);
	return (area);
}
