/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:46:55 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 23:39:20 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
//     s1: The prefix string.
//     s2: The suffix string.

// DESCRIPTION
//    Allocates (with malloc(3)) and returns a new
//    string, which is the result of the concatenation
//    of ’s1’ and ’s2’.

// RETURN VALUE
//    The new string.
//    NULL if the allocation fails.

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	char	*str;

	k = 0;
	if (s1 == (void *)0 || s2 == (void *)0)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
		*(str + k++) = *(s1 + i++);
	i = 0;
	while (*(s2 + i) != '\0')
		*(str + k++) = *(s2 + i++);
	*(str + k) = '\0';
	return (str);
}
