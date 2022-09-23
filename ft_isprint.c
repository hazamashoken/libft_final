/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:43:38 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/10 11:41:32 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        These  functions check whether c, which must have the value of
//        an unsigned char or EOF, falls into a certain character  class
//        according  to the specified locale.
// RETURN VALUE
//        The values returned are nonzero if the character c falls  into
//        the tested class, and zero if not.
// isprint()
//        checks for any printable character including space.
#include	"libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
