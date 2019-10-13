/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 06:45:17 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/03 06:45:27 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *d, const char *s)
{
	char *save;

	save = d;
	while (*d)
		d++;
	while ((*d++ = *s++))
		;
	return (save);
}
