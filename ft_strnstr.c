/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:02:12 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 21:10:14 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//   The strstr() function locates the first occurrence	of the null-terminated
//   string little in the null-terminated string b
//   The strcasestr() function is similar to strstr(), but ignores the case of
//   both strin
//   The strcasestr_l()	function does the same as strcasestr() but takes an
//   explicit locale rather than using the current loca
//   The strnstr() function locates the	first occurrence of the	null-termi-
//   nated string little in the	string big, where not more than	len characters
//   are searched.  Characters that appear after a `\0'	character are not
//   searched.	Since the strnstr() function is	a FreeBSD specific API,	it
//   should only be used when portability is not a concern.
//
// RETURN VALUES
//   If	little is an empty string, big is returned; if little occurs nowhere
//   in	big, NULL is returned; otherwise a pointer to the first	character of
//   the first occurrence of little is returned.
#include	"libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	if (!*needle)
		return (haystack);
	while (*(haystack + i) && i < len)
	{
		k = 0;
		while (*(haystack + i + k) == *(needle + k) && i + k < len)
		{
			if (*(needle + k + 1) == '\0')
				return (haystack + i);
			k++;
		}
		i++;
	}
	return (0);
}
