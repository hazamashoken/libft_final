/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:32:39 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 10:19:34 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// s: The string on which to iterate.
// f: The function to apply to each character.

// DESCRIPTION
// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

// RETURN VALUE
// The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.
#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		*(str + i) = (*f)(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
