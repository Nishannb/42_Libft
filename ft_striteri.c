/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:20 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:21 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
	return ;
}

// void to_uppercase(unsigned int index, char *c) {
//     (void) index;
//     if (*c >= 'a' && *c <= 'z') {
//         *c -= 32; // Convert to uppercase
//     }
// }

// int main() {
//     char str[] = "hello world"; // Use an array to modify the string
//     printf("Original: %s\n", str);

//     ft_striteri(str, to_uppercase);

//     printf("Transformed: %s\n", str); // Should print "HELLO WORLD"

//     return (0);
// }