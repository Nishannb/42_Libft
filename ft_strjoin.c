/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:00:23 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:00:25 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// int main() {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *result;

//     // Call ft_strjoin to concatenate s1 and s2
//     result = ft_strjoin(s1, s2);

//     // Check if result is NULL (malloc failure)
//     if (result == NULL) {
//         printf("Memory allocation failed\n");
//         return (1); // Exit with error
//     }

//     // Print the concatenated result
//     printf("Result of ft_strjoin: %s\n", result);

//     // Free the allocated memory
//     free(result);

//     return (0); // Exit successfully
// }