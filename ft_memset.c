/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:21:30 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/10 11:42:24 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        The  memset()  function  fills the first n bytes of the memory
//        area pointed to by s with the constant byte c.
//
// RETURN VALUE
//        The memset() function returns a pointer to the memory area s.
#include	"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*(unsigned char *)(s + i++) = (char)(c);
	return (s);
}
