/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workout_scheduler.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:18:22 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:21:57 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKOUT_SCHEDULER_H
#define WORKOUT_SCHEDULER_H

struct UserData;
struct WorkoutPlan;

int     determine_duration(struct WorkoutPlan *plan);
struct  UserData *get_user_data(char *username);
struct  WorkoutPlan *build_base_plan(struct UserData *data);
struct  WorkoutPlan *refine_plan(struct WorkoutPlan *plan, struct UserData *data);
void    assign_daily_exercises(struct WorkoutPlan *plan, int day);
void    assign_daily_tips(struct WorkoutPlan *plan, int day);
void    free_user_data(struct UserData *data);
void    free_workout_plan(struct WorkoutPlan *plan);

struct WorkoutPlan *create_workout_schedule(char *username);

#endif
