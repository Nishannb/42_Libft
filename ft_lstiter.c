/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:57 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 15:58:59 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function prototypes
// void ft_lstiter(t_list *lst, void (*f)(void *));
// void print_content(void *content);
// t_list *create_node(int value);
// void print_list(t_list *lst); // Function to print the list for verification

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main() {
//     t_list *list = NULL; // Initialize an empty list

//     // Create and add nodes to the list
//     for (int i = 1; i <= 5; i++) {
//         t_list *new_node = create_node(i);
//         ft_lstadd_back(&list, new_node);
//     }

//     // Print the list before using ft_lstiter
//     printf("List before ft_lstiter:\n");
//     print_list(list);

//     // Use ft_lstiter to apply print_content to each node's content
//     printf("Applying ft_lstiter:\n");
//     ft_lstiter(list, print_content);

//     // Free the list
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

// // Function to print the content of a node
// void print_content(void *content) {
//     printf("Content: %d\n", *(int *)content);
// }

// // Function to print the entire list
// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }