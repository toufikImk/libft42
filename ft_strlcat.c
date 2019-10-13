/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 00:01:13 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 10:25:06 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int taille;
	unsigned int res;

	taille = 0;
	i = 0;
	j = 0;
	while (dst[taille])
		taille++;
	while (src[i])
		i++;
	if (taille >= size)
		res = i + size;
	else
		res = taille + i;
	while (src[j] && taille + 1 < size)
	{
		dst[taille] = src[j];
		j++;
		taille++;
	}
	dst[taille] = '\0';
	return (res);
}
