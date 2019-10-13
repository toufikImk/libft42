/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 00:45:07 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/02 07:58:18 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char						*cdst;
	char						*csrc;
	unsigned int				i;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	if (csrc < cdst)
	{
		while (len)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	else
	{
		while (i < len && (csrc || cdst))
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
