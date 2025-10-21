/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:36:41 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/21 00:25:52 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
		{
			words++;
		}
		i++;
	}
	return (words);
}

char	*malloc_word(const char *s, char c)
{
	char	*word;
	int		word_len;
	int		i;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	*free_str(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	char	*word;
	int		j;

	str = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word = malloc_word(s, c);
			if (word)
				str[j++] = word;
			else
				return (free_str(str, j - 1));
			while (*s && *s != c)
				s++;
		}
	}
	str[j] = '\0';
	return (str);
}
