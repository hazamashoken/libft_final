/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:13:14 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 23:52:12 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        The  memmove() function copies n bytes from memory area src to
//        memory area dest.  The memory areas may overlap: copying takes
//        place  as though the bytes in src are first copied into a tem‐
//        porary array that does not overlap src or dest, and the  bytes
//        are then copied from the temporary array to dest.
//
// RETURN VALUE
//        The memmove() function returns a pointer to dest.
#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n != 0)
		{
			n--;
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	}
	else
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
