/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:51 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:52 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_occurrence = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (last_occurrence);
}
