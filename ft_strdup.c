/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:25:22 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 22:13:36 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The  strdup() function returns a pointer to a new string which is a duplicate
// of the string s.  Memory for the new string is obtained with  malloc(3),  and
// can be freed with free
// The  strndup()  function  is  similar,  but  copies at most n bytes.  If s is
// longer than n, only n bytes are copied, and a terminating null byte ('\0') is
// ad
// strdupa()  and strndupa() are similar, but use alloca(3) to allocate the buf‐
// fer.  They are available only when using the GNU GCC suite, and  suffer  from
// the same limitations described in alloca(3).
// RETURN VALUE
// On success, the strdup() function returns a pointer to the duplicated string.
// It returns NULL if insufficient memory was available, with errno set to indi‐
// cate the cause of the error.
#include	"libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(str + i) = *(s + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
