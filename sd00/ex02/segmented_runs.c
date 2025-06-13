/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmented_runs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:31:23 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/11 17:26:16 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "segmented_runs.h"

int	count_segments(const int *arr, int size)
{
    int i;
    int nbr_of_valid_sequence;
    int start;
    int end;

    i = 0;
    nbr_of_valid_sequence = 0;
    start = 0;
    end = 0;
    
    if (size < 3)
        return (0);
    while (i < size)
    {
        if (arr[i] == -1 || i == size)
        {
            if (is_valid_sequence(arr, start, (i - 1)))
                nbr_of_valid_sequence++;
            start = i + 1;
        }
    }
    return (nbr_of_valid_sequence);
}

int is_valid_sequence(const int *array, int start, int end)
{
    int i = start;

    if (end < (start -2))
        return (0);
    while (i <= (end - 2))
    {
        if (array[i] < array[i + 1] && array[i + 1] , array[i + 2])
            return (1);
    }
    return (0);
}
