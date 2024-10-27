#include "libft.h"

char* ft_tolower(char * str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str - 'A' + 'a';
        }
        str++;
    }

    return (str);
}
