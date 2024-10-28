/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:36 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:37 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char to_uppercase(unsigned int index, char c) {
//     (void) index;
//     if (c >= 'a' && c <= 'z') {
//         return (c - 32); // Convert to uppercase
//     }
//     return (c); // Return unchanged if not lowercase
// }

// int main() {
//     const char *str = "hello world";
//     char *result = ft_strmapi(str, to_uppercase);

//     if (result) {
//         printf("Original: %s\n", str);
//         printf("Transformed: %s\n", result);
//         free(result); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }