/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:46:41 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/23 02:43:47 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}


/*int	main (void)
{
	char ex[11] = {'a', 'z', 'A', 'Z', '-', '&', 130, '[', 'D', 't', '\0'};
	char *ptr = ex;

	while (*ptr)
	{
		if (ft_isalpha(*ptr++))
		{
			printf("YES, this char is alpha\n");
		}
		else
		{
			printf("NO, this char is not alpha\n");
		}
	}
	return (0);
}*/
