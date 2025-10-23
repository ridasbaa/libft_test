/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:51:54 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/23 02:44:17 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}	

/*int	main (void)
{
	char ex[15] = {'1', '2', '3', '7', '-', '&', 'd', '[', '9', '1',
			'\0', '0', '9', (char)200, '\0'};
	char *ptr = ex;

	while (*ptr)
	{
		if (ft_isdigit(*ptr++))
		{
			printf("YES, this char is a  digit\n");
		}
		else
		{
			printf("NO, this char is not a digit\n");
		}
	}
	return (0);
}*/
