/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:14 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:15 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		len;
	char	*start;

	len = ft_strlen(s);
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	start = newstr;
	while (*s)
	{
		*newstr = *s;
		newstr++;
		s++;
	}
	*newstr = '\0';
	return (start);
}

// int main() {
//     const char *original = "Hello, World!";

//     // Test ft_strdup
//     char *ft_copy = ft_strdup(original);
//     if (!ft_copy) {
//         printf("ft_strdup: Memory allocation failed\n");
//         return (1);
//     }

//     // Test standard strdup
//     char *std_copy = strdup(original);
//     if (!std_copy) {
//         printf("strdup: Memory allocation failed\n");
//         free(ft_copy);
//         return (1);
//     }

//     // Compare results
//     printf("Original: %s\n", original);
//     printf("ft_strdup: %s\n", ft_copy);
//     printf("strdup: %s\n", std_copy);

//     // Verify both copies are equal
//     if (strcmp(ft_copy, std_copy) == 0) {
//         printf("Both ft_strdup and strdup produce the same result.\n");
//     } else {
//         printf("ft_strdup and strdup produce different results.\n");
//     }

//     // Free allocated memory
//     free(ft_copy);
//     free(std_copy);

//     return (0);
// }