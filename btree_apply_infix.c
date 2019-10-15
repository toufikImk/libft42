/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhattar <tkhattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 02:03:20 by tkhattar          #+#    #+#             */
/*   Updated: 2019/10/15 02:03:34 by tkhattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *racine;

	racine = root;
	if (racine)
	{
		btree_apply_infix(racine->left, applyf);
		applyf(racine->item);
		btree_apply_infix(racine->right, applyf);
	}
}
