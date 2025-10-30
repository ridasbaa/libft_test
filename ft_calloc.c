/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:16:02 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/30 04:23:41 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*area;

	if (size != 0 && nmemb > SIZE_MAX / size)
		area = malloc(nmemb * size);
	if (!area)
		return (NULL);
	ft_bzero(area, nmemb * size);
	return (area);
}
