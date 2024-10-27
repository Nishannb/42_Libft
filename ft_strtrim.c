#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}


// int main() {
//     char *s1 = "   Hello, World!   ";
//     char *set = " ";
//     char *result;

//     // Call ft_strtrim to trim the string
//     result = ft_strtrim(s1, set);

//     // Check if result is NULL (malloc failure)
//     if (result == NULL) {
//         printf("Memory allocation failed\n");
//         return 1; // Exit with error
//     }

//     // Print the original and trimmed results
//     printf("Original: '%s'\n", s1);
//     printf("Trimmed: '%s'\n", result);

//     // Free the allocated memory
//     free(result);

//     return 0; // Exit successfully
// }