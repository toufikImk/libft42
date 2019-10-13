/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:58:04 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 10:23:15 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	a;
	char			*helper;

	a = (unsigned char)c;
	helper = (char*)b;
	i = 0;
	while (i < len)
	{
		helper[i] = a;
		i++;
	}
	b = (void*)helper;
	return (b);
}
