/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workout_scheduler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:19:13 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:21:05 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "workout_scheduler.h"

struct WorkoutPlan *create_workout_schedule(char *username)
{
    int day;

    day = 0;
    
    struct UserData *user_data = get_user_data(username);
    if (!user_data)
        return 0;

    struct WorkoutPlan *plan = build_base_plan(user_data);
    if (!plan)
    {
        free_user_data(user_data);
        return 0;
    }

    plan = refine_plan(plan, user_data);
    if (!plan)
    {
        free_user_data(user_data);
        return 0;
    }

    int duration = determine_duration(plan);
    if (duration <= 0)
    {
        free_user_data(user_data);
        free_workout_plan(plan);
        return 0;
    }
    while (day < duration)
    {
        assign_daily_exercises(plan, day);
        assign_daily_tips(plan, day);
        day = day + 1;
    }
    free_user_data(user_data);
    return plan;
}
