/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:09 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:59:16 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // Function prototypes
// void *double_value(void *content);
// void delete_content(void *content);
// void ft_lstadd_back(t_list **lst, t_list *new); // Ensure this is declared
// void print_list(t_list *lst); // Function to print the list for verification

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;

	if (!f || !lst)
		return (NULL);
	newnode = ft_lstnew(f(lst->content));
	if (newnode == NULL)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	newnode->next = ft_lstmap(lst->next, f, del);
	return (newnode);
}

// int main() {
//     t_list *original_list = NULL; // Initialize an empty original list

//     // Create and add nodes to the original list
//     for (int i = 1; i <= 5; i++) {
//         int *value = malloc(sizeof(int)); // Allocate memory for the content
//         if (!value) {
//             // Handle allocation failure
//             return (1);
//         }
//         *value = i; // Assign the value
//         t_list *new_node = ft_lstnew(value);
	// Create a new node using ft_lstnew
//         if (new_node) {
//             ft_lstadd_back(&original_list, new_node);
	// Add the new node to the list
//         } else {
//             free(value); // Free the allocated memory if ft_lstnew fails
//         }
//     }

//     // Print the original list
//     printf("Original List:\n");
//     print_list(original_list);

//     // Use ft_lstmap to create a new list with doubled values
//     t_list *new_list = ft_lstmap(original_list, double_value,
		// delete_content);

//     // Print the new list
//     printf("New List (Doubled Values):\n");
//     print_list(new_list);

//     // Free the original list
//     ft_lstclear(&original_list, delete_content);

//     // Free the new list
//     ft_lstclear(&new_list, delete_content);

//     return (0);
// }

// // Function to double the value of a node
// void *double_value(void *content) {
//     int *new_value = malloc(sizeof(int)); // Allocate memory for new integer
//     if (new_value) {
//         *new_value = (*(int *)content) * 2; // Double the value
//     }
//     return (new_value); // Return pointer to new value
// }

// // Function to delete the content of a node
// void delete_content(void *content) {
//     free(content); // Free the content
// }

// // Function to print the entire list
// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }