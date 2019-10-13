/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 15:08:01 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 10:28:17 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(const char *s1, const char *look)
{
	int		i;
	int		j;
	int		i_backup;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s1;
	if (look[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		i_backup = i;
		while (look[j] && str[i] == look[j])
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
