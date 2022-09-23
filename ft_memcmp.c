/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:55:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 09:19:55 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//The  memcmp()  function  compares  the first n bytes (each interpreted as un‐
//signed char) of the memory areas s1 and s2.
//
// RETURN VALUE
//The memcmp() function returns an integer less than, equal to, or greater than
//zero  if  the first n bytes of s1 is found, respectively, to be less than, to
//match, or be greater than the first n bytes o
//For a nonzero return value, the sign is determined by the sign of the differ‐
//ence between the first pair of bytes (interpreted as unsigned char) that dif‐
//fer in s1 an
//If n is zero, the return value is zero.
#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
