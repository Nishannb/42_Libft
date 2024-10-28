/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:28 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:04:07 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == c)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}
