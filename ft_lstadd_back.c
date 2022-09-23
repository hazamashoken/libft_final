/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:06:33 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 20:10:32 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.

// DESCRIPTION
// Adds the node ’new’ at the end of the list.

// RETURN VALUE
// None

#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	else
		*lst = new;
}
