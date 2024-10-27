#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    if (!c)
        return ;
    write(fd, &c, sizeof(c));
}

// int main ()
// {
//     char letter = 'L';
//     ft_putchar_fd(letter, 2);
//     return(0);
// }