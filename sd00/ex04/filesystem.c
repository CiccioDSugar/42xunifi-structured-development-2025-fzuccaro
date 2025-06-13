/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesystem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:22:13 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 15:56:46 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filesystem.h"

FSNode *create_file(const char *name, int size)
{
    FSNode  *new_file;

    new_file = malloc(sizeof(FSNode));
    new_file->name = strdup(name);
    new_file->size = size;
    new_file->type = FS_FILETYPE;
    new_file->first_child = NULL;
    new_file->next_sibling = NULL;
    
    return (new_file);
}

FSNode  *create_folder(const char *name)
{
    FSNode  *new_file;

    new_file = malloc(sizeof(FSNode));
    new_file->name = strdup(name);
    new_file->size = 0;
    new_file->type = FS_DIRTYPE;
    new_file->first_child = NULL;
    new_file->next_sibling = NULL;
    
    return (new_file);
}

void add_child(FSNode *parent, FSNode *child)
{
    if (parent == NULL || child == NULL)
        return;
    if (parent->type != FS_DIRTYPE)
        return;
    if (parent->first_child == NULL) 
        parent->first_child = child;
    else 
    {
        FSNode *sibling = parent->first_child;
        while (sibling->next_sibling != NULL) 
            sibling = sibling->next_sibling;
        sibling->next_sibling = child;
    }
}

FSNode	*get_children(const FSNode *parent)
{
    if (parent == NULL) 
        return NULL;
    return (parent->first_child); 
}

FSNode	*get_sibling(const FSNode *node)
{
    if (node == NULL)
        return NULL;
    return (node->next_sibling);
}
