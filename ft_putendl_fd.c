#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return ;
    write(fd, s, ft_strlen(s));
    write(1, "\n", 1);
}

int main ()
{
    char letter[20] = "How you doing ?";
    ft_putendl_fd(letter, 1);
    return(0);
}