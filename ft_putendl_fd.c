/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:59:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 22:46:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// s: The string to output.
// fd: The file descriptor on which to write.

// DESCRIPTION
// Outputs the string ’s’ to the given file descriptor
// followed by a newline.

// RETURN VALUE
// None
#include	"libft.h"

static void	putchar_fd(unsigned char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (fd < 0)
		return ;
	i = 0;
	if (s == (void *)0)
		return ;
	while (*(unsigned char *)(s + i))
		putchar_fd(*(unsigned char *)(s + i++), fd);
	putchar_fd('\n', fd);
}
