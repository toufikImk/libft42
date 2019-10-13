/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:17:40 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 02:01:02 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = ft_strnew(ft_strlen(s));
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}
