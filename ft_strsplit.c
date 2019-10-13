/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:08:56 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 11:49:47 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

#include "string.h"

static int		ft_countwords(char *str, char sep)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		result++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (result);
}

static size_t	word_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static void		cleanup(char **split, size_t cur)
{
	while (cur > 0)
	{
		cur--;
		ft_strdel(&split[cur]);
	}
	ft_strdel(split);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	cur;
	size_t	wordcount;

	wordcount = ft_countwords((char *)s, c);
	split = (char **)ft_memalloc((wordcount + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	cur = 0;
	while (cur < wordcount)
	{
		s = next_word(s, c);
		split[cur] = ft_strsub(s, 0, word_len(s, c));
		if (split[cur] == NULL)
		{
			cleanup(split, cur);
			return (NULL);
		}
		cur++;
		s += word_len(s, c);
	}
	split[wordcount] = NULL;
	return (split);
}
