/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaral <nbaral@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:21 by nbaral            #+#    #+#             */
/*   Updated: 2024/10/28 16:12:37 by nbaral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Singly linkedList
t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

// int main() {
//     // Create a new node with some content
//     t_list *node = ft_lstnew("Hello, World!");

//     if (node) {
//         // If node creation was successful, print the content
//         printf("Node content: %s\n", (char *)node->content);
//         free(node); // Don't forget to free the allocated memory
//     } else {
//         printf("Failed to create node\n");
//     }

//     return (0);
// }