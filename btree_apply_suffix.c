/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 02:05:41 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/15 02:05:44 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *racine;

	racine = root;
	if (racine)
	{
		btree_apply_suffix(racine->left, applyf);
		btree_apply_suffix(racine->right, applyf);
		applyf(racine->item);
	}
}
