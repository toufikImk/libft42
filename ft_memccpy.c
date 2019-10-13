/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 05:22:05 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/09 23:48:26 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>
#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned long	i;
	unsigned char	*cdst;
	unsigned char	*csrc;
	unsigned char	*dst_backup;
	unsigned char	uc;

	i = 0;
	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	uc = (char)c;
	dst_backup = NULL;
	while (i < n && csrc[i] != uc)
	{
		cdst[i] = csrc[i];
		i++;
	}
	if (i < n)
		cdst[i] = csrc[i];
	if (n == 0 || !dst || n == i)
		return (NULL);
	else
		dst_backup = &cdst[++i];
	dst = (void *)cdst;
	return (dst_backup);
}
