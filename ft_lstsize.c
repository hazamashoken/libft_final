/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:53:47 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 20:00:38 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// lst: The beginning of the list.

// DESCRIPTION
// Counts the number of nodes in a list.

// RETURN VALUE
// The length of the list

#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*node;

	node = lst;
	size = 0;
	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	return (size);
}
