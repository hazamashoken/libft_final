/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:36:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/10 10:52:52 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        These  functions check whether c, which must have the value of
//        an unsigned char or EOF, falls into a certain character  class
//        according  to the specified locale.
// RETURN VALUE
//        The values returned are nonzero if the character c falls  into
//        the tested class, and zero if not.
// isalnum()
//        checks  for an alphanumeric character; it is equivalent
//        to (isalpha(c) || isdigit(c)).
#include	"libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
