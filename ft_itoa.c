/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:22 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:02:41 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *numtostr, unsigned int num, long int len)
{
	while (num > 0)
	{
		numtostr[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (numtostr);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*numtostr;
	long int		len;
	unsigned int	num;

	len = ft_len(n);
	numtostr = (char *)malloc(sizeof(char) * (len + 1));
	if (!numtostr)
		return (NULL);
	numtostr[len--] = '\0';
	if (n == 0)
	{
		numtostr[0] = '0';
	}
	if (n < 0)
	{
		num = n * -1;
		numtostr[0] = '-';
	}
	else
	{
		num = n;
	}
	numtostr = ft_char(numtostr, num, len);
	return (numtostr);
}

// int main(void)
// {
//     char *result;

//     // Test case 1: Positive number
//     result = ft_itoa(12345);
//     if (result)
//     {
//         printf("ft_itoa(12345) = %s\n", result);
//         free(result);
//     }

//     // Test case 2: Negative number
//     result = ft_itoa(-98765);
//     if (result)
//     {
//         printf("ft_itoa(-98765) = %s\n", result);
//         free(result);
//     }

//     // Test case 3: Zero
//     result = ft_itoa(0);
//     if (result)
//     {
//         printf("ft_itoa(0) = %s\n", result);
//         free(result);
//     }

//     // Test case 4: Minimum integer value
//     result = ft_itoa(-2147483648);
//     if (result)
//     {
//         printf("ft_itoa(-2147483648) = %s\n", result);
//         free(result);
//     }

//     // Test case 5: Maximum integer value
//     result = ft_itoa(2147483647);
//     if (result)
//     {
//         printf("ft_itoa(2147483647) = %s\n", result);
//         free(result);
//     }

//     return (0);
// }