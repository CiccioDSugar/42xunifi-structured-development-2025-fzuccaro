/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playlist_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:28:02 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:35:29 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playlist_creator.h"

struct Playlist *create_playlist(void)
{
    struct MoodSettings *mood = analyze_user_mood();
    if (!mood)
        return (0);

    struct FilterSettings *filters = default_filters();
    if (!filters)
    {
        free_mood_settings(mood);
        return (0);
    }

    int variations = get_mood_variations(mood);
    int i = 0;
    while (i < variations)
    {
        filters = refine_filters(filters);
        if (!filters)
        {
            free_mood_settings(mood);
            return (0);
        }
        i = i + 1;
    }

    struct SongData *song = 0;
    if (filters_require_popular_song(filters))
        song = fetch_popular_song();
    else
        song = fetch_niche_song();

    if (!song)
    {
        free_mood_settings(mood);
        free_filter_settings(filters);
        return (0);
    }

    struct Playlist *playlist = combine_with_mood_playlist(song, mood);
    if (!playlist)
    {
        free_mood_settings(mood);
        free_filter_settings(filters);
        free_song_data(song);
        return (0);
    }
    free_mood_settings(mood);
    free_filter_settings(filters);
    free_song_data(song);
    return (playlist);
}
