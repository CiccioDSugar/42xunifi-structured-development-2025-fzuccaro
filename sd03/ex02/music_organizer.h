/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music_organizer.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:37:59 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:14:49 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSIC_ORGANIZER_H
#define MUSIC_ORGANIZER_H
#include <stdlib.h>

typedef struct MusicFile
{
    char    *title;
    char    *genre;
    char    *artist;
}               MF;

typedef struct  MusicLibrary
{
    MF    **files_list;
}               ML;

struct MusicLibrary *create_music_library();
struct MusicFile    *process_music_file(const char *directory_path, const char *filename);
const char          **scan_directory(const char *directory_path);
void                update_music_library(struct MusicLibrary *library, struct MusicFile *song);

#endif