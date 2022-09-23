/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:51:14 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 21:07:53 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//The memchr() function scans the initial n bytes of the memory area pointed to
//by s for the first instance of c.  Both c and the bytes of  the  memory  area
//pointed to by s are interpreted as unsigned
//The memrchr() function is like the memchr() function, except that it searches
//backward from the end of the n bytes pointed to by s instead of forward  from
//the begin
//The  rawmemchr()  function is similar to memchr(): it assumes (i.e., the pro‐
//grammer knows for certain) that an instance of c lies somewhere in the memory
//area  starting  at the location pointed to by s, and so performs an optimized
//search for c (i.e., no use of a count argument to  limit  the  range  of  the
//search).   If  an  instance of c is not found, the results are unpredictable.
//The following call is a fast means of locating a  string's  terminating  null
//
//    char *p = rawmemchr(s, '\0');
//
// RETURN VALUE
//The memchr() and memrchr() functions return a pointer to the matching byte or
//NULL if the character does not occur in the given memory a
//The rawmemchr() function returns a pointer to the matching byte,  if  one  is
//found.  If no matching byte is found, the result is unspecified.
#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)(c))
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
