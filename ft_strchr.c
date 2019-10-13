/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 06:21:14 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/03 07:31:22 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	uc;
	char	*str;

	i = 0;
	uc = (char)c;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == uc)
			return (str + i);
		i++;
	}
	if (!c)
		return (str + i);
	else
		return (NULL);
}
