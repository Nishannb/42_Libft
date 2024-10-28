/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:24 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:02:07 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	printf("%d\n", i);
	return (i);
}

// int main() {
//     t_list *list = NULL; // Initialize the head of the list

//     // Create some nodes
//     t_list *node1 = ft_lstnew("Second");
//     t_list *node2 = ft_lstnew("Third");
//     t_list *node3 = ft_lstnew("First");

//     // Add nodes to the front of the list
//     ft_lstadd_front(&list, node1); // List: Second -> NULL
//     ft_lstadd_front(&list, node2); // List: Third -> Second -> NULL
//     ft_lstadd_front(&list, node3); // List: First -> Third -> Second -> NULL

//     // Print the contents of the list
//     ft_lstsize(list); // Output should be: First -> Third -> Second -> NULL

//     // Free the list nodes (not shown here for brevity)
//     // In a real scenario, you should free the allocated memory

//     return (0);
// }
