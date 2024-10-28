/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:41 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:15:27 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	j;
	char	*d;
	char	*s;

	i = 0;
	j = 1;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}

// void print_memory(const char *label, void *ptr, size_t n) {
//     printf("%s: ", label);
//     for (size_t i = 0; i < n; i++) {
//         printf("%02X ", (unsigned char)((char *)ptr)[i]);
//     }
//     printf("\n");
// }

// int main() {
//     // Test 1: Non-overlapping memory regions
//     char src1[] = "Hello, World!";
//     char dest1[20];
//     ft_memmove(dest1, src1, 13);
//     print_memory("Test 1 - Non-overlapping dest", 
//                   dest1, 13); // Expected: "Hello, World!"

//     // Test 2: Overlapping memory regions (src before dest)
//     char overlap1[] = "Hello, World!";
//     ft_memmove(overlap1 + 7, 
//                 overlap1, 6); // Move "Hello," to " World!"
//     print_memory("Test 2 - Overlapping (src before dest)", 
//                   overlap1, 20); // Expected: "Hello, Hello!"

//     // Test 3: Overlapping memory regions (dest before src)
//     char overlap2[] = "Hello, World!";
//     ft_memmove(overlap2, 
//                 overlap2 + 7, 6); // Move " World!" to start
//     print_memory("Test 3 - Overlapping (dest before src)", 
//                   overlap2, 20); // Expected: " World! World!"

//     // Test 4: Edge case with n = 0
//     char test4[] = "No change here.";
//     ft_memmove(test4, test4, 0); // No change
//     print_memory("Test 4 - Zero bytes", 
//                   test4, 20); // Expected: "No change here."

//     // Test 5: NULL pointers
//     char *dest5 = NULL;
//     char *src5 = NULL;
//     void *result = ft_memmove(dest5, 
//                                src5, 5); // Should return NULL
//     printf("Test 5 - NULL pointers result: %p\n", 
//            result); // Expected: NULL

//     return 0;
// }