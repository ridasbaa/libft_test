/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:10:58 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/23 02:59:27 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main (void)
{
	char ex[11] = {'a', 'z', 1, 'Z', '2', 127, 5, '[', '`', '*', '\0'};
	char *ptr = ex;

	while (*ptr)
	{
		if (ft_isalnum(*ptr++))
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
