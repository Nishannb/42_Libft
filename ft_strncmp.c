#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{

    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char *) s1;
    str2 = (const unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if(str1[i] != str2[i])
        {
            return ((unsigned char) str1[i] - (unsigned char)str2[i]);
        }
        if (str1[i] == '\0')
			break ;
        i++;
    }
    return (0);
}