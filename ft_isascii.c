/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:07:23 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/23 02:55:24 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main (void)
{
	char ex[11] = {'a', 'z', 'A', 'Z', '2', '4', 5, '[', '`', '*', '\0'};
	char *ptr = ex;

	while (*ptr)
	{
		if (ft_isascii(*ptr++))
		{
			printf("YES, this char is alnum\n");
		}
		else
		{
			printf("NO, this char is not alnum\n");
		}
	}
	return (0);
}*/
