/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:38:28 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/13 11:48:57 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max(int x, int y)
{
	if (x < y)
		return (y);
	else
		return (x);
}

int			ft_strequ(const char *s1, const char *s2)
{
	return (ft_strnequ(s1, s2, ft_max(ft_strlen(s1), ft_strlen(s2))));
}
