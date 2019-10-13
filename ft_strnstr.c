/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 03:08:12 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 11:35:39 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *look, size_t len)
{
	unsigned int	i;
	int				j;
	int				i_backup;
	char			*str;

	i = 0;
	j = 0;
	str = (char *)s1;
	if (look[i] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		i_backup = i;
		while (look[j] && str[i] == look[j] && i < len)
		{
			i++;
			j++;
		}
		if (!look[j])
			return ((char *)(str + i_backup));
		j = 0;
		i = i_backup;
		i++;
	}
	return (NULL);
}
