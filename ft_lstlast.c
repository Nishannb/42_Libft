/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:05 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:59:06 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
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
//     t_list *node1 = ft_lstnew("Node1");
//     t_list *node2 = ft_lstnew("Node2");
//     t_list *node3 = ft_lstnew("Node3");

//     // Link the nodes
//     node1->next = node2; // Node1 points to Node2
//     node2->next = node3; // Node2 points to Node3
//     list = node1;        // Head of the list points to Node1

//     // Print the list
//     printf("Linked List: ");
//     print_list(list); // Output should be: Node1 -> Node2 -> Node3 -> NULL

//     // Find and print the last node
//     t_list *last_node = ft_lstlast(list);
//     if (last_node) {
//         printf("Last Node: %s\n", (char *)last_node->content);
	// Should print "Node3"
//     } else {
//         printf("The list is empty.\n");
//     }

//     // Free allocated nodes (not shown here for brevity)
//     // In a real scenario, you should free the allocated memory

//     return (0);
// }