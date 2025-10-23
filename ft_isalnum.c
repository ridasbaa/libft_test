/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:00:18 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/23 02:50:36 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

int	main (void)
{
	char ex[11] = {'a', 'z', 'A', 'Z', '2', '4', 5, '[', '`', '*', '\0'};
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
}
