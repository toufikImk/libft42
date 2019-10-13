/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 22:12:40 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/05 22:27:08 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[j + i] = '\0';
	return (s1);
}
