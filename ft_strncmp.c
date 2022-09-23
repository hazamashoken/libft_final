/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:11:57 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 11:18:33 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        The strcmp() function compares the two strings s1 and s2.  The
//        locale is not taken into account (for a locale-aware  compari‐
//        son,  see strcoll(3)).  It returns an integer less than, equal
//        to, or greater than zero if s1 is found, respectively,  to  be
//        less than, to match, or be greater than s2.
//
//        The strncmp() function is similar, except it compares only the
//        first (at most) n bytes of s1 and s2.
//
// RETURN VALUE
//        The strcmp() and strncmp() functions return  an  integer  less
//        than,  equal  to,  or  greater than zero if s1 (or the first n
//        bytes thereof) is found, respectively, to  be  less  than,  to
//        match, or be greater than s2.
#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
