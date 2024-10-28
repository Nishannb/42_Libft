/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:47 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:59:48 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write(fd, &c, sizeof(c));
}

// int main ()
// {
//     char letter = 'L';
//     ft_putchar_fd(letter, 2);
//     return(0);
// }