/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 04:27:56 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/28 03:00:53 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*malloc_str(const char *s, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && is_in_set(set, s1[j]))
		j--;
	str = malloc_str(s1 + i, j - i + 1);
	if (!str)
		return (NULL);
	return (str);
}
