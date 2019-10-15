/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 02:05:26 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/15 02:05:31 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *racine;

	racine = root;
	if (racine)
	{
		applyf(racine->item);
		btree_apply_prefix(racine->left, applyf);
		btree_apply_prefix(racine->right, applyf);
	}
}
