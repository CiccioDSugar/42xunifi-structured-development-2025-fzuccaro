/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task_scheduler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:37:07 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:39:16 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "task_scheduler.h"

struct ScheduleResult *schedule_tasks(struct TaskList *tasks)
{
    struct TaskProfile *profile = profile_tasks(tasks);
    if (!profile)
        return (0);

    struct PriorityMap *priorities = compute_priorities_mock(profile);
    if (!priorities)
    {
        free_task_profile(profile);
        return (0);
    }

    int core_count = get_available_core_count();
    if (core_count <= 0)
    {
        free_task_profile(profile);
        free_priority_map(priorities);
        return (0);
    }

    struct ScheduleResult *result = create_schedule_result(core_count);
    if (!result)
    {
        free_task_profile(profile);
        free_priority_map(priorities);
        return (0);
    }

    int core_id = 0;
    while (core_id < core_count)
    {
        int task_id = select_best_task(profile);
        if (task_id == -1)
        {
            free_task_profile(profile);
            free_priority_map(priorities);
            return (0);
        }

        update_schedule_entry(result, core_id, task_id);
        core_id = core_id + 1;
    }

    free_task_profile(profile);
    free_priority_map(priorities);
    return (result);
}
