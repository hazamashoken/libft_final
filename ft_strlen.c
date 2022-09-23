/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:46:43 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 21:06:57 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        The  strlen()  function  calculates  the  length of the string
//        pointed to by s, excluding the terminating null byte ('\0').
//
// RETURN VALUE
//        The strlen() function returns  the  number  of  bytes  in  the
//        string pointed to by s.
#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(unsigned char *)(s + len) != '\0')
		len++;
	return (len);
}
