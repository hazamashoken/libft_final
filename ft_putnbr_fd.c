/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:58:11 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 22:46:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// n: The integer to output.
// fd: The file descriptor on which to write.

// DESCRIPTION
// Outputs the integer ’n’ to the given file
// descriptor.

// RETURN VALUE
// None
#include	"libft.h"
#define INTMIN -2147483648
#define INTMINSTR "-2147483648"

static void	putchar_fd(unsigned char c, int fd)
{
	write(fd, &c, 1);
}

static void	putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == (void *)0)
		return ;
	while (*(unsigned char *)(s + i) != '\0')
		putchar_fd(*(unsigned char *)(s + i++), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == INTMIN)
		putstr_fd(INTMINSTR, fd);
	else if (n < 0)
	{
		putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
