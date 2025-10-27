/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 00:58:20 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/27 00:01:35 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	s_len;

	s_len = 0;
	if (!s)
		return (NULL);
	while (s[s_len])
		s_len++;
	if ((char)c == '\0')
		return (&s[s_len]);
	while (--s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return (&s[s_len]);
	}
	return (NULL);
}
