#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int neg;
    int num;

    i = 0;
    neg = 1;
    num = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' 
    || nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f' )
    {
        i++;
    }

    while (nptr[i] == '-' || nptr[i] == '+')
    {
        if(nptr[i] == '-')
            neg = neg * -1;
        i++;
    }
    while(nptr[i] >= 48 && nptr[i] <= 57 )
    {
        num = num * 10 + (nptr[i] - 48);
        i++;
    }
    return (num * neg);
}

// int main() {
//     const char *test_cases[] = {
//         "42",
//         "-42",
//         "   +42",
//         "   -42",
//         "123abc",
//         "abc123",
//         "0",
//         "-0",
//         "  +0",
//         "2147483647",     // Max int
//         "-2147483648",    // Min int
//         "   +2147483647",
//         "   -2147483648",
//         "  +   42",
//         "  -   42",
//         NULL // Sentinel to mark the end of the array
//     };

//     printf("Testing ft_atoi:\n");
//     for (int i = 0; test_cases[i] != NULL; i++) {
//         int result = ft_atoi(test_cases[i]);
//         int expected = atoi(test_cases[i]); // Using standard atoi for comparison
//         printf("ft_atoi(\"%s\") = %d, expected = %d\n", test_cases[i], result, expected);
//     }

//     return 0;
// }