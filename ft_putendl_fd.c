/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:50 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:59:51 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(1, "\n", 1);
}

// int main ()
// {
//     char letter[20] = "How you doing ?";
//     ft_putendl_fd(letter, 1);
//     return(0);
// }