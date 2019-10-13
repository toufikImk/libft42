/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 15:55:36 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/05 16:27:01 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;
	char			*str;

	i = 0;
	str = (char*)s;
	uc = (unsigned char)c;
	while (s[i])
		i++;
	if (!c)
		return (str + i);
	i--;
	while (i >= 0)
	{
		if (uc == str[i])
			return (str + i);
		i--;
	}
	return (NULL);
}
