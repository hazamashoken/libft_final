/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:11:30 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 20:13:30 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// lst: The node to free.
// del: The address of the function used to delete the content.

// DESCRIPTION
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.

// RETURN VALUE
// None

#include	"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}
