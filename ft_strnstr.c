/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:42 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:47 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	len;

	if (*l == '\0')
		return ((char *)b);
	len = ft_strlen(l);
	while (*b && len <= n)
	{
		if (!(ft_memcmp(b, l, len)))
		{
			return ((char *)b);
		}
		b++;
		n--;
	}
	return (NULL);
}

// int main() {
//     const char *haystack = "Hello, world!";
//     const char *needle1 = "world";
//     const char *needle2 = "world!";
//     const char *needle3 = "o, w";
//     const char *needle4 = "He\0llo";
//     const char *needle5 = "";  // Test with an empty string

//     // Array of needles for testing
//     const char *needles[] = {needle1, needle2, needle3, needle4, needle5};
//     size_t needle_count = sizeof(needles) / sizeof(needles[0]);

//     // Iterate over each needle to test
//     for (size_t i = 0; i < needle_count; i++) {
//         // Custom function
//         char *result1 = ft_strnstr(haystack, needles[i], strlen(haystack));
//         if (result1) {
//             printf("ft_strnstr: Found '%s' at position: %ld\n", needles[i],
	// result1 - haystack);
//         } else {
//             printf("ft_strnstr: '%s' not found.\n", needles[i]);
//         }

//         // Standard function
//         // char *result2 = strnstr(haystack, needles[i], strlen(haystack));
//         // if (result2) {
//         //     printf("strnstr: Found '%s' at position: %ld\n", needles[i],
	// result2 - haystack);
//         // } else {
//         //     printf("strnstr: '%s' not found.\n", needles[i]);
//         // }
//     }

//     return (0);
// }
