/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 06:38:09 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/28 06:55:48 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	ln;
	char			digits[10];
	int				i;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ln = (unsigned int)-n;
	}
	else
		ln = n;
	i = 0;
	while (ln != 0)
	{
		digits[i++] = (ln % 10) + '0';
		ln /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(digits[i], fd);
}
