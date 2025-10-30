/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:16:02 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/30 16:20:49 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*area;

	if (nmemb == 0 || size == 0)
	{
		area = malloc(1);
		return (area);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	area = malloc(nmemb * size);
	if (!area)
		return (NULL);
	ft_bzero(area, nmemb * size);
	return (area);
}
