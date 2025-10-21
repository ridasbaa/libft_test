/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 04:27:56 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/20 03:43:21 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}



char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s_len;
	unsigned int	i;
	unsigned int	j;
	char		*str;

	i = 0;
	s_len = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(set, s1[i]))
		i++;
	while (s1[s_len])
		s_len++;
	j = s_len - 1;
	while (j > i && is_in_set(set, s1[j]))
		j--;
	if (i == j)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		return (str);
	}
	s_len = j - i;
	str = malloc(s_len + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (j < s_len)
	{
		str[j] = s1[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
