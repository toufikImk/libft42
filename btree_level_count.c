/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 02:04:33 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/15 02:04:44 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	btree_level_count(t_btree *root)
{
	int l;
	int r;

	l = 0;
	r = 0;
	if (root)
	{
		l = btree_level_count(root->left);
		r = btree_level_count(root->right);
		if (l > r)
			return (l + 1);
		else
			return (r + 1);
	}
	else
		return (0);
}
