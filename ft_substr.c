#include "libft.h"

size_t       ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t size);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;

    if(!s) return (0);
    // s refers to the first element in s array
    if(ft_strlen(s) < start)
        len = 0;
    if(ft_strlen(s + start) < len)
        len = ft_strlen(s + start);
    substr = malloc( (len + 1) * sizeof(char));
    if (!substr)
        return (NULL);
    
    ft_strlcpy(substr, s + start, len + 1);
    return (substr);
}

// int main() {
//     // Test cases
//     ft_substr("Hello, World!", 7, 5);
//     printf("\n");
//     ft_substr("Hello, World!", 0, 5);
//      printf("\n");
//     ft_substr("Hello, World!", 13, 5); // Out of bounds
//      printf("\n");
//     ft_substr("Hello, World!", 5, 100); // Length exceeds string length
//      printf("\n");
//     ft_substr("", 0, 5); // Empty string case
//      printf("\n");

//     return 0;
// }