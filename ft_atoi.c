/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:11:50 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 23:21:39 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//        The  atoi() function converts the initial portion of the string
// pointed to by
//        nptr to int.  The behavior is the same as
//            strtol(nptr, NULL, 10);
//        except that atoi() does not detect errors.
//        The atol() and atoll() functions behave the same as atoi(),
//        except that they
//        convert  the  initial  portion  of the string to their return type of
//        long or long long.

// RETURN VALUE
//        The converted value.

#include	"libft.h"

#define CUTTOFF 922337203685477580

static char	check_neg(int neg)
{
	if (neg == 1)
		return ('7');
	else
		return ('8');
}

static int	check_return(int neg)
{
	if (neg == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	neg;
	long	res;
	int		limit;

	i = 0;
	neg = 1;
	while ((*(nptr + i) >= '\a' && *(nptr + i) <= '\r') || *(nptr + i) == ' ')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
		if (*(nptr + i++) == '-')
			neg = -1;
	limit = check_neg(neg);
	res = 0;
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		if ((res > CUTTOFF) || (res == CUTTOFF && (*(nptr + i) > limit)))
			return ((check_return(neg)));
		res = (res * 10) + (*(nptr + i++) - '0');
	}
	return (res * neg);
}
