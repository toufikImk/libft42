/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:07:26 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/15 00:38:46 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r'
	|| c == '\f' || c == '\v' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[start]))
		start++;
	while (ft_iswhitespace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	new = ft_strnew(end - start);
	if (new == NULL)
		return (NULL);
	return (ft_strncpy(new, s + start, end - start));
}
