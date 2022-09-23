/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:01:56 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 20:05:51 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// lst: The beginning of the list.

// DESCRIPTION
// Returns the last node of the list.

// RETURN VALUE
// Last node of the list

#include	"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node != NULL && node->next != NULL)
		node = node->next;
	return (node);
}
