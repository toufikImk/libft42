/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:18:04 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/02 00:58:58 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned long			i;
	char					*csrc;
	char					*cdst;
	void					*dst_backup;

	csrc = (char*)src;
	cdst = (char*)dst;
	if (!dst && !src)
		return (NULL);
	dst_backup = 0;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	dst_backup = dst;
	dst = (void*)cdst;
	return (dst_backup);
}
