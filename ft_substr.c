/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:21:35 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 22:46:27 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
//    s: The string from which to create the substring.
//    start: The start index of the substring in the
//    string ’s’.
//    len: The maximum length of the substring.

// DESCRIPTION
//    Allocates (with malloc(3)) and returns a substring
//    from the string ’s’.
//    The substring begins at index ’start’ and is of
//    maximum size ’len’.

// RETURN VALUE
//    The substring.
//    NULL if the allocation fails.

#include	"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len >= s_len - start)
		len = s_len - start;
	if (start > s_len)
	{
		start = s_len;
		len = 0;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s + start, len + 1);
	return (str);
}
