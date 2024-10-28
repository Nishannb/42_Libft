/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:55 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:59:01 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // Function prototypes
// void ft_lstdelone(t_list *lst, void (*del)(void *));
// void delete_content(void *content);
// t_list *create_node(int value);
// void print_list(t_list *lst);
// void ft_lstadd_back(t_list **lst, t_list *new); // Ensure this is declared

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// int main() {
//     t_list *list = NULL; // Initialize an empty list
//     t_list *node_to_delete;

//     // Create and add nodes to the list
//     for (int i = 1; i <= 5; i++) {
//         t_list *new_node = create_node(i);
//         ft_lstadd_back(&list, new_node);
//     }

//     // Print the list before deletion
//     printf("List before deletion:\n");
//     print_list(list);

//     // Delete the second node (with value 2)
//     node_to_delete = list->next; // Assuming the second node exists
//     if (node_to_delete) {
//         // Adjust the list to bypass the node being deleted
//         list->next = node_to_delete->next; // Bypass the node
//         ft_lstdelone(node_to_delete, delete_content);
//     }

//     // Print the list after deletion
//     printf("List after deletion:\n");
//     print_list(list);

//     // Free the remaining list
//     t_list *temp;
//     while (list) {
//         temp = list;
//         list = list->next;
//         free(temp->content); // Free the content before freeing the node
//         free(temp);
//     }

//     return (0);
// }

// // Function to create a new node
// t_list *create_node(int value) {
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     if (!new_node) {
//         return (NULL); // Handle malloc failure
//     }
//     new_node->content = malloc(sizeof(int)); // Assuming content is an int
//     if (!new_node->content) {
//         free(new_node);
//         return (NULL); // Handle malloc failure
//     }
//     *(int *)new_node->content = value;
//     new_node->next = NULL;
//     return (new_node);
// }

// // Function to delete the content of a node
// void delete_content(void *content) {
//     free(content); // Free the content
// }

// // Function to print the list
// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }