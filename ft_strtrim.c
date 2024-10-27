#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
          if (!s1 || !set)
		return (NULL);
       size_t len;
       char *trimmedstr;

       len = ft_strlen(s1);
       trimmedstr = (char *)malloc(sizeof(char)* (len + 1));
       if(!trimmedstr) return (NULL);

}