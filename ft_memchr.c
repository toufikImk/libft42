/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 01:14:29 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/03 02:26:00 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int			i;
	unsigned char			uc;
	unsigned char			*str;

	i = 0;
	uc = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
