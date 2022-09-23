/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:13:40 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 23:21:52 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
//    n: the integer to convert.

// DESCRIPTION
//    Allocates (with malloc(3)) and returns a string
//    representing the integer received as an argument.
//    Negative numbers must be handled.

// RETURN VALUE
//    The string representing the integer.
//    NULL if the allocation fails.

#include	"libft.h"

static size_t	numlen(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (++len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	long	nb;
	char	*res;

	nb = n;
	len = numlen(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		nb = -nb;
	while (i < len)
	{
		*(res + (len - i - 1)) = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (n < 0)
		*res = '-';
	*(res + len) = '\0';
	return (res);
}
