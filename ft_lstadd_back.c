/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:01:56 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:01:57 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// Function to create a new node
// t_list *create_node(int value) {
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     if (!new_node) {
//         return (NULL); // Handle malloc failure
//     }
//     new_node->content = value;
//     new_node->next = NULL;
//     return (new_node);
// }

// // Function to print the list
// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     t_list *list = NULL; // Initialize an empty list
//     t_list *new_node;

//     // Add nodes to the list
//     for (int i = 1; i <= 5; i++) {
//         new_node = create_node(i);
//         ft_lstadd_back(&list, new_node);
//     }

//     // Print the list to verify
//     print_list(list);

//     // Free the list
//     t_list *temp;
//     while (list) {
//         temp = list;
//         list = list->next;
//         free(temp);
//     }

//     return (0);
// }
