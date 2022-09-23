/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:45:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/12 22:44:24 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PARAMETERS
// c: The character to output.
// fd: The file descriptor on which to write.

// DESCRIPTION
// Outputs the character ’c’ to the given file
// descriptor.

// RETURN VALUE
// None
#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, (unsigned char *)&c, 1);
}
