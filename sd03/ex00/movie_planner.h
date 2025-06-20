/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movie_planner.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:59:47 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 19:33:22 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVIE_PLANNER_H
#define MOVIE_PLANNER_H
#include <stdlib.h>

struct Preferences;
struct MovieList;
struct Plan;

struct Preferences *get_user_preferences(void);
struct MovieList *find_movies(struct Preferences *prefs);
struct Plan *build_plan(struct MovieList *list);

struct Plan *create_movie_night_plan(void);

#endif
