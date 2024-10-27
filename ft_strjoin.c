#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
       size_t s1size;
       size_t s2size;
       char * newstr;

       s1size = ft_strlen(s1);
       s2size = ft_strlen(s2);
       newstr = (char *)malloc(sizeof(char) * (s1size + s2size + 1));
       if(!newstr) return (NULL);

       ft_strlcpy(newstr, s1, s1size + 1);
       ft_strlcpy(newstr, s2, (s2size + s1size + 1));
       return (newstr);
}