/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task_scheduler.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:35:55 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:38:44 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TASK_SCHEDULER_H
#define TASK_SCHEDULER_H

struct  TaskList;
struct  TaskProfile;
struct  PriorityMap;
struct  ScheduleResult;
struct  LoadInfo;

int     get_available_core_count(void);
int     select_best_task(struct TaskProfile *profile);
struct  TaskProfile *profile_tasks(struct TaskList *tasks);
struct  PriorityMap *compute_priorities_mock(struct TaskProfile *profile);
struct  ScheduleResult *create_schedule_result(int core_count);
void    update_schedule_entry(struct ScheduleResult *result, int core_id, int task_id);

void    free_task_profile(struct TaskProfile *profile);
void    free_priority_map(struct PriorityMap *priorities);
void    free_loadinfo(struct LoadInfo *load);

struct  ScheduleResult *schedule_tasks(struct TaskList *tasks);

#endif
