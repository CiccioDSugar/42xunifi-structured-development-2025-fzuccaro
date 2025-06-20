/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesystem.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:04:39 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 15:53:49 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H
#include <string.h>
#include <stdlib.h>

typedef enum    FSNode_Type
{
	FS_FILETYPE,
	FS_DIRTYPE
}				FSNode_Type;

typedef struct FSNode
{
	char				*name;
	int					size;
	FSNode_Type			type;
	struct FSNode		*first_child;
	struct FSNode		*next_sibling; 
}						FSNode;

FSNode	*create_file(const char *name, int size);
FSNode	*create_folder(const char *name);
void	add_child(FSNode *parent, FSNode *child);
FSNode	*get_children(const FSNode *parent);
FSNode	*get_sibling(const FSNode *node);

#endif