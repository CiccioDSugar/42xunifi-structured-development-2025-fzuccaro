/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playlist_creator.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:28:06 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:32:47 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYLIST_CREATOR_H
#define PLAYLIST_CREATOR_H

struct  MoodSettings;
struct  FilterSettings;
struct  SongData;
struct  Playlist;

struct  MoodSettings *analyze_user_mood(void);
struct  FilterSettings *default_filters(void);
struct  FilterSettings *refine_filters(struct FilterSettings *current);
struct  SongData *fetch_popular_song(void);
struct  SongData *fetch_niche_song(void);
struct  Playlist *combine_with_mood_playlist(struct SongData *song, struct MoodSettings *mood);
int     filters_require_popular_song(struct FilterSettings *filters);
int     get_mood_variations(struct MoodSettings *mood);

void    free_mood_settings(struct MoodSettings *mood);
void    free_filter_settings(struct FilterSettings *filters);
void    free_song_data(struct SongData *song);
void    free_playlist(struct Playlist *playlist);

struct  Playlist *create_playlist(void);

#endif