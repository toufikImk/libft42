/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:15:46 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/05 12:31:37 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned long		i;
	char				*helper;

	helper = (char*)s;
	i = 0;
	while (i < n)
	{
		helper[i] = 0;
		i++;
	}
	s = (void*)helper;
}
