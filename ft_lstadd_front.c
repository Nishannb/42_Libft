/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:24 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:58:32 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Singly linked list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
		{
			new->next = *lst;
		}
		*lst = new;
	}
}

// void print_list(t_list *head) {
//     while (head != NULL) {
//         printf("%s -> ", (char *)head->content);
//         head = head->next;
//     }
//     printf("NULL\n");
// }

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
//     print_list(list); // Output should be: First -> Third -> Second -> NULL

//     // Free the list nodes (not shown here for brevity)
//     // In a real scenario, you should free the allocated memory

//     return (0);
// }
