/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:16:02 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/19 22:09:14 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*area;
	unsigned char	*unarea;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	area = malloc(nmemb * size);
	if (!area)
		return (NULL);
	unarea = (unsigned char *)area;
	unarea = ft_memset(unarea, 0, nmemb * size);
	return (area);
}
