#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483647)
        ft_putstr_fd("-2147483647", fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if (n >= 10){
        ft_putnbr_fd(n/10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}

// int main()
// {
// 	int nmb = -2147647;
// 	ft_putnbr_fd(nmb, 1);
// 	return (0);
// }