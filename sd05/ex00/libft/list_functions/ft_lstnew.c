/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:59:30 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Creates a new list node with specified content.
 *
 * Allocates memory for a new node of type t_list, assigns the given content,
 * and sets the next pointer to NULL.
 *
 * @param content Pointer to the content to be stored in the new node.
 * @return t_list* Pointer to the newly created node,
 * or NULL if allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int	main()
{
	char	*content = "ciao";
	t_list	*node = ft_lstnew((void *)content);
	if (node)
	{
		printf("%s", (char *)node->content);
		printf("%p", (void *)node->next);
	}
}*/
