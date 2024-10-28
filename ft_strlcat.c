/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:26 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:05:54 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	d;

	s = 0;
	d = 0;
	while (s < size && dest[s])
	{
		s++;
	}
	while ((s + d + 1) < size && src[d])
	{
		dest[s + d] = src[d];
		d++;
	}
	if (s != size)
	{
		dest[s + d] = '\0';
	}
	return (s + ft_strlen(src));
}
