#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return ;
    write(fd, s, ft_strlen(s));
}

// int main ()
// {
//     char letter[20] = "How you doing ?";
//     ft_putstr_fd(letter, 1);
//     return(0);
// }