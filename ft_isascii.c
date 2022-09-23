/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:38:13 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 22:00:36 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        These  functions check whether c, which must have the value of
//        an unsigned char or EOF, falls into a certain character  class
//        according  to the specified locale.
// RETURN VALUE
//        The values returned are nonzero if the character c falls  into
//        the tested class, and zero if not.
// isascii()
//        checks whether c is a 7-bit unsigned  char  value  that
//        fits into the ASCII character set.
#include	"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
