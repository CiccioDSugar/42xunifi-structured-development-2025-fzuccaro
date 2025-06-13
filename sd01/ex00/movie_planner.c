/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movie_planner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:59:32 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 19:33:20 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movie_planner.h"

struct Plan *create_movie_night_plan(void)
{
    struct Preferences *prefs = get_user_preferences();
    if (!prefs)
        return (NULL);
    
    struct MovieList *movies = find_movies(prefs);
    if (!movies)
    {
        free(prefs);
        return (NULL);
    }
    
    struct Plan *plan = build_plan(movies);
    if (!plan)
    {
        free(movies);
        free(prefs);
        return (NULL);
    }
    free(movies);
    free(prefs);
    return (plan);
}
