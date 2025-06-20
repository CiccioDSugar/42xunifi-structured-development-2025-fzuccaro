/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:03:24 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Deletes and frees all nodes of a linked list.
 *
 * Applies the function 'del' to the content of each node before freeing it.
 * After this operation, the list pointer will be set to NULL.
 *
 * @param lst Pointer to the pointer of the first node in the list.
 * @param del Function pointer to delete the content of each node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
