/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:41:10 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 21:41:04 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// s: The string on which to iterate.
// f: The function to apply to each character.

// DESCRIPTION
// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

// RETURN VALUE
// None
#include	"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == (void *)0)
		return ;
	while (*(unsigned char *)(s + i))
	{
		(*f)(i, (char *)(s + i));
		i++;
	}
}
