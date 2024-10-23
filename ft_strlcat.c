#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
        size_t s;
        size_t d;
        
        s = 0;
        d = 0;
        while(s < size && dest[s])
        {
          s++;
        }
        while((s + d + 1) < size && src[d])
        {
          dest[s + d] = src[d];
          d++;
        }
        if(s != size)
        {
          dest[s + d] = '\0';
        }
          return (s + ft_strlen(src));
}