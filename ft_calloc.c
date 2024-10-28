/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:02 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:58:15 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size is byte size and nmemb is umber of element of that size
// if allocation fails returns null pointer
// if passed, return a pointer of the allocated memory (first element)
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	new = memset(new, 0, nmemb * size);
	return (new);
}

// int main() {
//     size_t nmemb = 5; // Number of elements
//     size_t size = sizeof(int); // Size of each element

//     // Call ft_calloc
//     int *array = (int *)ft_calloc(nmemb, size);

//     // Check for NULL (allocation failure)
//     if (!array) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Print the initialized values
//     for (size_t i = 0; i < nmemb; i++) {
//         printf("array[%zu] = %d\n", i, array[i]); // Should all be 0
//     }

//     // Free the allocated memory
//     free(array);

//     return (0);
// }
