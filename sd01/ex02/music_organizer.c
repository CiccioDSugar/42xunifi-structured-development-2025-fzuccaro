/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music_organizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:38:02 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:14:47 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "music_organizer.h"

void    ft_free_filenames(const char **filenames)
{
    int i;

    i = 0;
    while (filenames[i])
    {
        free(filenames[i]);
        i++;
    }
    return ;
}
struct MusicLibrary *organize_music_library(const char *directory_path)
{
    ML          *library;
    const char  **filenames;
    int i;
    
    i = 0;
    filenames = scan_directory(directory_path);
    if (!filenames)
        return (NULL);
    library = create_music_library();
    if (!library)
    {
        ft_free_library();
        return (NULL);
    }
    while (filenames[i])
    {
        library->files_list = process_music_file(directory_path, filenames[i]);
        update_music_library(library, library->files_list);
        i++;
    }
    return (library);
}