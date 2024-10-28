/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:48 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:58:52 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // Function prototypes
// void ft_lstclear(t_list **lst, void (*del)(void *));
// void delete_content(void *content);
// t_list *create_node(int value);
// void ft_lstadd_back(t_list **lst, t_list *new); // Ensure this is declared
// void print_list(t_list *lst); // Function to print the list for verification

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}

// int main() {
//     t_list *list = NULL; // Initialize an empty list

//     // Create and add nodes to the list
//     for (int i = 1; i <= 5; i++) {
//         t_list *new_node = create_node(i);
//         ft_lstadd_back(&list, new_node);
//     }

//     // Print the list before clearing
//     printf("List before ft_lstclear:\n");
//     print_list(list);

//     // Use ft_lstclear to free the list
//     ft_lstclear(&list, delete_content);

//     // Check if the list is cleared
//     if (list == NULL) {
//         printf("List successfully cleared.\n");
//     } else {
//         printf("List not cleared.\n");
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

// // Function to print the entire list
// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }