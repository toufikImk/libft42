/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:05:46 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/12 18:07:59 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline static void	putlong(long n, int fd)
{
	if (n >= 10)
		putlong(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void				ft_putnbr_fd(int n, int fd)
{
	long	v;

	v = n;
	if (v < 0)
	{
		ft_putchar_fd('-', fd);
		v = -v;
	}
	putlong(v, fd);
}
